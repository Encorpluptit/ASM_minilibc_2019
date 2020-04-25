##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ifndef MKCOMPILATION
MKCOMPILATION		:= 1

###############################################################################
# GCC / Clang Management
ifeq ($(USE_CLANG), 1)

CC					=	clang
CLANG_FLAGS			+=  -Weverything
CLANG_FLAGS			+=	-Wno-reserved-id-macro -Wno-documentation
CLANG_FLAGS			+=	-Wno-variadic-macros
CFLAGS 				+=	$(CLANG_FLAGS)

else

GCC_FLAGS			=
CFLAGS				+=	$(GCC_FLAGS)

endif # USE_CLANG
###############################################################################
ifeq ($(PRODUCTION), 1)

CFLAGS				+=	-Werror

endif # PRODUCTION


###############################################################################
# Setup Path for Project Files from Project Config
SOURCES				:=	$(addprefix $(PROJECT_DIR)/$(SRC_DIR)/, $(SOURCES))

INCLUDES			:=	$(addprefix $(PROJECT_DIR)/, $(INCLUDE_DIRS))


###############################################################################
# Setup Rules for Object Compilation
# TODO: Move Objects into Main Makefile (for asm, c++, haskel ...)
MAIN_OBJECT			:=	$(PROJECT_DIR)/$(MAIN_FILE:.c=.o)
OBJECTS				:=	$(SOURCES:.asm=.o)
PROJECT_OBJECTS		:=	$(MAIN_OBJECT) $(OBJECTS)
DEBUG_OBJECTS		:=	$(PROJECT_OBJECTS)

###############################################################################
# Setup Flags for Project from project config
CFLAGS				+=	-O2 -fvisibility=hidden
CPPFLAGS			+=	$(foreach dir, $(INCLUDES), -iquote$ $(dir))
###############################################################################

###############################################################################
# Setup Flags for Libs dependencies
LIBS_DIR			:=	$(PROJECT_DIR)/$(LIBS_DIR)
CPPFLAGS			+=	$(foreach lib, $(LIBS), -iquote$ $(strip $(LIBS_DIR)/$(lib))/$(INCLUDE_DIR))
LDLIBS				+=	$(foreach lib, $(LIBS), -l$(strip $(lib)))
LDFLAGS				+=	$(foreach lib, $(LIBS), -L$(LIBS_DIR)/$(strip $(lib)))

###############################################################################
# Command for calling libs
MAKE_LIBS_CMD		=	$(foreach dir, $(LIBS), $(call MAKE_MK,$(LIBS_DIR)/$(dir),$(1)))

LIBS_MAKE:
	@$(call MAKE_LIBS_CMD,all)
LIBS_TESTS:
	@$(call MAKE_LIBS_CMD,tests_run)
LIBS_DEBUG:
	@$(call MAKE_LIBS_CMD,debug)
LIBS_GDB:
	@$(call MAKE_LIBS_CMD,gdb)
LIBS_CLEAN:
	@$(call MAKE_LIBS_CMD,clean)
LIBS_FCLEAN:
	@$(call MAKE_LIBS_CMD,fclean)



# Object file
################################################################################
#%.o: CFLAGS += -MT $@ -MMD
%.o: %.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(DEBUG_FLAGS) -c -o $@ $<
ifeq ($(PRINT_OBJ), 1)
	@$(PRINT) "$(CMAGENTA)$(CBOLD)%-45b $(CGREEN) → Compile OK ✓$(CRESET)" "$@"
endif # PRINT_OBJ


################################################################################
%.o: %.asm
	@$(AS) $(ASFLAGS) $(CPPFLAGS) -o $@ $<
	@$(PRINT) "$(CMAGENTA)$(CBOLD)%-45b $(CGREEN) → Compile OK ✓$(CRESET)" "$@"
################################################################################
%.o: %.S
	@$(AS) $(ASFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -c -o $@ $<
	@$(PRINT) "$(CMAGENTA)$(CBOLD)%-45b $(CGREEN) → Compile OK ✓$(CRESET)" "$@"
# TODO: refacto abrove by rule below ?
#$(NASM_OBJLIST): %.o: %.asm
#$(ASM_OBJLIST): %.o: %.S
#$(ASM_OBJLIST) $(NASM_OBJLIST):
#	@$(AS) $(ASFLAGS) $(CPPFLAGS) -c -o $@ $<
#	@$(PRINT) "$(CMAGENTA)$(CBOLD)%-40b $(CGREEN) → Compile OK ✓$(CRESET)" "$@"

debug: DEBUG_FLAGS += -g3 -D_DEBUG_
debug: fclean
	@$(MAKE) DEBUG_FLAGS="$(DEBUG_FLAGS)" $(NAME)


gdb: DEBUG_FLAGS += -ggdb3 -rdynamic -D_DEBUG_
gdb: fclean
	@$(MAKE) DEBUG_FLAGS="$(DEBUG_FLAGS)" $(NAME)


StaticLib: print_header $(OBJECTS) print_project_vars
	@$(AR) -o $(BINARY) $(OBJECTS) $(LDLIBS) $(LDFLAGS)
	@-$(PRINT_LINE)


SharedLib: CFLAGS	+=	$(LDSHARED)
SharedLib: print_header $(OBJECTS) print_project_vars
	@$(CC) -o $(BINARY) $(OBJECTS) $(LDLIBS) $(LDFLAGS) $(LDSHARED)
	@-$(PRINT_LINE)


ifneq ($(_LIBS_CLEANED_), 1)
clean: LIBS_CLEAN
endif # _LIBS_CLEANED_
clean:
	@-$(RM) $(PROJECT_OBJECTS)
	@-$(PRINT) "$(CREDBL)%-45b $(CGREEN) → Done ✓$(RESET)\n" "Removing Project Objects Files"
	@-$(RM) $(TESTS_OBJECTS)
	@-$(PRINT) "$(CREDBL)%-45b $(CGREEN) → Done ✓$(RESET)\n" "Removing Tests Objects Files"
	@-$(RM) $(COV_FILES)
	@-$(RM) $(TESTS_COV_FILES)
	@-$(PRINT) "$(CREDBL)%-45b $(CGREEN) → Done ✓$(RESET)\n" "Removing Coverage Files"
	@-$(PRINT_LINE)


fclean: LIBS_FCLEAN
	@-$(PRINT_LINE)
	@-$(PRINT) "$(CLIGHTGREEN)$(CBOLD)%s$(CRESET)\n" "Cleaning $(PROJECT)"
	@-$(MAKE) _LIBS_CLEANED_=1 clean
	@-$(RM) $(CRITERION_BIN)
	@-$(PRINT) "$(CREDBL)%-45b $(CGREEN) → Done ✓$(RESET)\n" "Removing $(CRITERION_BIN)"
	@-$(RM) $(BINARY)
	@-$(PRINT) "$(CREDBL)%-45b $(CGREEN) → Done ✓$(RESET)\n" "Removing $(BINARY)"
	@-$(PRINT_LINE)


re: fclean all


.PHONY: all $(NAME) executable clean fclean re
.PHINY: StaticLib SharedLib
.PHONY: debug gdb
.PHONY: LIBS_MAKE LIBS_TESTS LIBS_CLEAN LIBS_FCLEAN
.PHONY: print_project_vars print_tests_vars print_header


endif
