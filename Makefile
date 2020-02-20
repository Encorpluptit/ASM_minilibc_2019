##
## EPITECH PROJECT, 2019
## Any Project.
## File description:
## Generic Makefile (MADE BY : damien.bernard@epitech.eu)
##



                              ##################################################
			      #					       #
			      #                                                #
			      #		    GENERAL ARCHITECTURE       #
			      #                                                #
			      #                                                #
			      ##################################################



#=============================#
# ==  Project Description  == #
#=============================#
#############################################################################################################
PROJECT		=	MiniLibC
BIN_NAME		=	libasm
LIB_NAME		=	asm
LIB_FLAG		=	lib
#LIB_USED		=	#-lm, lncurses
#############################################################################################################



#=============================#
# ==     Project Files     == #
#=============================#
#############################################################################################################
MAIN_FILE		= 	main.c

SRC_FILES		=	strlen.asm					\
				strchr.asm					\
				memset.asm					\
				memcpy.asm					\
				memmove.asm					\
				strcmp.asm					\
				strncmp.asm					\
				rindex.asm					\


TSRC_FILES		=	#						\

LIB_FILES		=	#						\

TESTS_FILES		=	src/test_strlen.c				\
				fct/strlen.c					\
				src/test_strchr.c				\
				fct/strchr.c					\
				src/test_memset.c				\
				fct/memset.c					\
				src/test_memcpy.c				\
				fct/memcpy.c					\
				src/test_memmove.c				\
				fct/memmove.c					\
				src/test_strcmp.c				\
				fct/strcmp.c					\
				src/test_strncmp.c				\
				fct/strncmp.c					\
				src/test_rindex.c				\
				fct/rindex.c					\

#############################################################################################################



#===================================#
# == Project Folder Architecture == #
#===================================#
#############################################################################################################
####################
# Setup PROJECT path.
#PROJECT_FOLDER		=	.
#PROJECT_DIR		=	$(addsuffix /, $(PROJECT_FOLDER))
####################
# Setup SRC directory architecture.
SRC_FOLDER		=	src
SRC_DIR			=	$(addprefix $(PROJECT_DIR), $(addsuffix /, $(SRC_FOLDER)))
####################
# Setup INCLUDE directory architecture.
INCLUDE_FOLDER		=	include
INCLUDE_DIR		=	$(addprefix $(PROJECT_DIR), $(addsuffix /, $(INCLUDE_FOLDER)))
####################
# Setup LIB directory architecture.
LIB_FOLDER		=	.
LIB_DIR			=	$(addprefix $(PROJECT_DIR), $(addsuffix /, $(LIB_FOLDER)))
####################
# Setup TESTS directories architecture.
TESTS_FOLDER		=	tests
TESTS_SRC_FOLDER	=	.
TESTS_INCLUDE_FOLDER	=	include
TESTS_RESSOURCES_FOLDER	=	ressources
TESTS_DIR		=	$(addprefix $(PROJECT_DIR), $(addsuffix /, $(TESTS_FOLDER)))
TESTS_SRC_DIR		=	$(addprefix $(TESTS_DIR), $(addsuffix /, $(TESTS_SRC_FOLDER)))
TESTS_INCLUDE_DIR	=	$(addprefix $(TESTS_DIR), $(addsuffix /, $(TESTS_INCLUDE_FOLDER)))
#############################################################################################################



#===================================#
# == Project Files Architecture  == #
#===================================#
#############################################################################################################
####################
# Setup rule to transform LIB_SRC_FILES into OBJ.
MAIN			:=	$(MAIN_FILE:.c=.o)
####################
# Setup SRC_FILES path.
SRC			:=	$(addprefix $(SRC_DIR), $(SRC_FILES))
####################
# Setup SRC_FILES path to use in unit tests.
TSRC			:=	$(addprefix $(SRC_DIR), $(TSRC_FILES))
####################
# Setup rule to transform SRC into OBJ.
OBJ			:=	$(SRC:.asm=.o)
####################
# Setup LIB_SRC_FILES path.
LIB_SRC			:=	$(addprefix $(LIB_DIR), $(LIB_FILES))
####################
# Setup rule to transform LIB_SRC_FILES into OBJ.
LIB_OBJ			:=	$(LIB_SRC:.c=.o)
####################
# Setup LIB name with the lib tag (ex: libmy.a).
LDNAME			:=	$(addprefix $(LIB_FLAG), $(addsuffix .so, $(LIB_NAME)))
####################
# Setup LIB path.
LD_LIB			:=	$(addprefix $(LIB_DIR), $(LDNAME))
####################
# Setup TESTS_SRC_FILES path.
TESTS_SRC		:= 	$(addprefix $(TESTS_SRC_DIR), $(TESTS_FILES))
####################
# Setup rule to transform LIB_SRC_FILES into OBJ.
TESTS_OBJ		:=	$(TESTS_SRC:.c=.o)
#############################################################################################################










                              ##################################################
			      #						       #
			      #                                                #
			      #		    	   ESSENTIALS		       #
			      #                                                #
			      #                                                #
			      ##################################################





#=============================#
# ==     FUNDAMENTALS      == #
#=============================#
#############################################################################################################
####################
# Setup UNIT_TESTS RULE name and UNIT_TESTS binary name.
UTESTS_RUN		=	tests_run
TESTS_BIN		=	unit_tests
####################
# Setup WRAP_MALLOC RULE.
WRAP_MALLOC		=	FALSE
####################
# Setup FUNCTIONNALS_TESTS RULE name and FUNCTIONNALS_TESTS script name.
#FTESTS_RUN		=	ftests_run
#FTESTS_BIN		=	ftests
####################
# Setup GDB and VALGRIND RULE.
GDB			=	gdb_run
VALGRIND		=	val_run
####################
# Setup UTILS commands.
SHELL			=	/bin/sh
MAKE			=	make --silent -C
RM			=	rm -f
CP			=	cp -t
MV			=	mv -t
GCOV			=	gcovr
CC			=	gcc
NASM			=	nasm
#CC			=	clang
LD			=	ld
#############################################################################################################





#===================================#
# == Custom Compilation Settings == #
#===================================#
#############################################################################################################
####################
# Setup define in compilation settings (ex: -DREAD_SIZE=5 || -D_WRAP_MALLOC_).
DEFINE			+=	#if define necessary
####################
# Setup includes flags.
INCLUDES		=	-I $(INCLUDE_DIR)
TESTS_INCLUDES		=	-I $(TESTS_INCLUDE_DIR)
####################
# Setup CFLAGS and CPPFLAGS, variables used in compilation commands.
CFLAGS			+=	$(DEFINE)
CPPFLAGS		+=	$(INCLUDES)
####################
# Setup GCCFLAGS and CLANGFLAGS, and assert the compiler used.
GCCFLAGS		+=	-W -Wall -Wextra -Werror -fno-builtin
CLANGFLAGS		+=	-Weverything
ifeq ($(CC), clang)
    $(info <===== $(PROJECT) Makefile config: Using CLANG compiler =====>)
    CFLAGS += $(CLANGFLAGS)
else
    $(info <===== $(PROJECT) Makefile config: Using DEFAULT compiler [$(CC)] =====>)
    CFLAGS += $(GCCFLAGS)
endif
####################
# Setup LIB flags to compile with correct lib.
LSHARED			=	-shared -fPIC -O2 -fvisibility=hidden
LDFLAGS			+=	-L$(LIB_FOLDER) -l$(LIB_NAME)
LDLIBS			+=	$(LIB_USED)
####################
# Setup NASM flags to compile with NASM.
ELF64				+=	-felf64
ELF				+=	$(ELF64)
NASMFLAGS			+=	$(ELF)
####################
# Setup VALGRIND flags to launch with valgrind.
VAL_FLAG		+=	-g3
####################
# Setup VALGRIND flags to launch with GDB
GDB_FLAG		+=	-g
#############################################################################################################




#=============================#
# ==  Tests Configuration  == #
#=============================#
#############################################################################################################
####################
# Setup TESTS flags for TESTS Rules.
#TESTS_DEFINE		+=	-DTESTS_RUN
TESTS_LDLIBS		+=	-lcriterion
TESTS_FLAGS		+=	--coverage -DTESTS
WRAP_MALLOC_FLAGS	=	-Wl,--wrap=malloc
ifeq ($(WRAP_MALLOC), TRUE)
	TESTS_FLAGS		+=	$(WRAP_MALLOC_FLAGS)
endif
TFLAGS			+=	$(TESTS_DEFINE) $(TESTS_LDLIBS) $(TESTS_FLAGS)
####################
# Setup WRAP_MALLOC.
WRAPPERS		=
ifeq ($(WRAP_MALLOC), TRUE)
    $(info <===== $(PROJECT) Makefile config: Using WRAP_MALLOC  =====>)
    $(info <===== $(PROJECT) WRAP_FLAGS = $(WRAP_MALLOC_FLAGS) =====> )
endif
####################
# Setup FLAGS for execute Criterion binary.
TRUNFLAGS   +=	-S
TRUNFLAGS   +=	--timeout 5
TRUNFLAGS   +=	--always-succeed
####################
# Setup GCOVR FLAGS to exclude some dirextories.
GCOV_EXCLUDE		=	tests/src|lib
GCOVFLAGS		+=	-s --exclude='$(GCOV_EXCLUDE)'
#############################################################################################################




#=============================#
# ==   Display Variables   == #
#=============================#
#############################################################################################################
####################
# Setup gcovr frame display.
BRANCH_COV		=	"[--- BRANCHES COVERAGE ---]"
BC_FRAME		=	"[-------------------------]"
LINE_COV		=	"[--- LINES COVERAGE ---]"
LC_FRAME		=	"[----------------------]"
BIN_DISP		=	"<----- $(PROJECT) ----->"
####################
# Setup formating/color display.
END			=	"\e[0m"
BOLD			=	"\e[1m"
UL			=	"\e[4m"
BLINK			=	"\e[5m"
MAG			=	"\e[35m"
WARNING			=	"\e[1;31m"
FRAME			=	"<====================================================================>"
FRAME_W			=	$(WARNING)$(FRAME)$(END)
FRAME_D			=	"\e[94m"$(FRAME)$(END)
TASK_OK			=	"\e[1;4;92m"
RED_BG			=	"\e[1;4;41m"
GREEN_BG		=	"\e[1;4;42m"
TITLE			=	"\e[1;4;31m"
#############################################################################################################



			      ##################################################
			      #						       #
			      #                                                #
			      #		    	 MAKEFILE RULES		       #
			      #                                                #
			      #                                                #
			      ##################################################


					 #############################
					 #                           #
					 #	  Essentials	     #
					 #                           #
					 #############################

#=============================#
# ==     General Rules     == #
#=============================#
#############################################################################################################
####################
# Rule if no rule found in make command.
.DEFAULT := all

####################
# Rule for "make"
.PHONY: all
all: BUILD_LIB
# all: BUILD_LIB $(PROJECT)

####################
# Rule for "make re".
.PHONY: re
re: fclean all

####################
# Rule for changing VARIABLES in rule execution. (ex: CFLAGS += -g3)
%.o: CFLAGS += -MT $@ -MMD

####################
# Rule for transforming .asm into .o
%.o: %.asm
	@$(NASM) $(NASMFLAGS) $(CPPFLAGS) -o $@ $<
	@echo -e	$(MAG)"[$(PROJECT) | $(NASM)] OK → $@"$(END)

####################
# Rule for transforming .c into .o
%.o: %.c
	@$(CC) $(CPPFLAGS) -c -o $@ $<
	@echo -e	$(MAG)"[$(PROJECT) | $(CC)] OK → $@"$(END)
#############################################################################################################




#=============================#
# ==     Binary Rules      == #
#=============================#
#############################################################################################################
.PHONY: $(PROJECT)
$(PROJECT): 		$(MAIN) $(OBJ)
	@echo -e	"\n\n"$(FRAME_D)								| cat
	@echo -e	$(TITLE)"[$(PROJECT)]: Building with following options (ordered):"$(END)	| cat
	@echo -e	"[$(PROJECT)]: CC        = $(CC)"						| cat
	@echo -e	"[$(PROJECT)]: SOURCES   = $(SRC)"						| cat
	@echo -e	"[$(PROJECT)]: OBJECTS   = $^"							| cat
	@echo -e	"[$(PROJECT)]: CFLAGS    = $(CFLAGS)"
	@echo -e	"[$(PROJECT)]: CPPFLAGS  = $(CPPFLAGS)"
	@echo -e	"[$(PROJECT)]: LDFLAGS   = $(LDFLAGS)"
	@echo -e	"[$(PROJECT)]: LDLIBS    = $(LDLIBS)"
	@$(CC) -o $(BIN_NAME) $^ $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)
	@echo -e	$(TASK_OK)"[$(PROJECT) | Compilation] OK\n"$(END)				| cat
#############################################################################################################





#=============================#
# ==     Library Rules     == #
#=============================#
#############################################################################################################
.PHONY: BUILD_LIB
BUILD_LIB: 	$(OBJ)
	@echo -e	"\n\n"$(FRAME_D)
	@echo -e	$(TITLE)"[$(PROJECT)]: Library $(LIB_NAME) creation:"$(END)
	@$(LD) -o $(LDNAME) $(OBJ) $(LSHARED)
	@echo -e  $(TASK_OK)"[$(PROJECT)]: Libraries created in $(LIB_FOLDER) folder !\n\n"$(END)





#############################################################################################################





#					 #############################
#					 #                           #
#					 #	  TESTS_RUN	     #
#					 #                           #
#					 #############################

#=============================#
# ==    Criterion Rule     == #
#=============================#
#############################################################################################################
.PHONY: $(UTESTS_RUN)
$(UTESTS_RUN):		CPPFLAGS	+=	$(TESTS_INCLUDES)
$(UTESTS_RUN):		fclean $(OBJ) $(TESTS_OBJ)
	@echo -e	"\n\n"$(FRAME_D)								| cat
	@echo -e	$(GREEN_BG)"[$(PROJECT)]: Testing project"$(END)				| cat
	@echo -e	$(FRAME_D)									| cat
	@echo -e	$(TITLE)"[$(PROJECT)]: Building with following options (ordered):"$(END)	| cat
	@echo -e	"[$(PROJECT)]: CC        = $(CC)"						| cat
	@echo -e	"[$(PROJECT)]: SRC       = $(SRC)"						| cat
	@echo -e	"[$(PROJECT)]: TESTS_SRC = $(TESTS_SRC)"					| cat
	@echo -e	"[$(PROJECT)]: CFLAGS    = $(CFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: CPPFLAGS  = $(CPPFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDFLAGS   = $(LDFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDLIBS    = $(LDLIBS)"						| cat
	@echo -e	"[$(PROJECT)]: TFLAGS    = $(TFLAGS)"						| cat
	@$(CC) -o $(TESTS_BIN) $(OBJ) $(TESTS_SRC) $(CFLAGS) $(TFLAGS) $(CPPFLAGS) $(LDLIBS)

	@echo -e	$(UL)"\n\n[$(PROJECT)]: Starting UNIT_TESTS binary."$(END)			| cat
	@echo -e	"[$(PROJECT)]: TRUNFLAGS  = $(TRUNFLAGS)\n"					| cat
	@-./$(TESTS_BIN) $(TRUNFLAGS)

	@echo -e	"\n\n[$(PROJECT)]: Moving test sources coverage files into $(TESTS_FOLDER)"	| cat
	@-$(MV) $(TESTS_DIR)/src/ test_*.gc*

	@echo -e	"[$(PROJECT)]: Gcovr Flags = $(GCOVFLAGS)"					| cat
	@echo -e	"\n\n"$(FRAME_D)								| cat
	@echo -e	$(RED_BG)"\t\t[$(PROJECT)]: Complete coverage report"$(END)			| cat
	@echo -e	"\e[1m\e[36m\n\t\t\t  $(LC_FRAME)"						| cat
	@echo -e	"\t\t\t  $(LINE_COV)"								| cat
	@-echo -e	"\t\t\t  $(LC_FRAME)\e[0m"							| cat
	@$(GCOV) -r . $(GCOVFLAGS)
	@echo -e	"\e[1m\e[36m\n\n\t\t\t  $(BC_FRAME)"						| cat
	@echo -e	"\t\t\t  $(BRANCH_COV)"								| cat
	@echo -e	"\t\t\t  $(BC_FRAME)\e[0m"							| cat
	@$(GCOV) -b . $(GCOVFLAGS)
	@echo -e	$(RED_BG)"\t\t  ------------ $(PROJECT) ------------  "$(END)			| cat
#############################################################################################################





#=====================================#
# ==    FUNCTIONNALS TESTS  Rule   == #
#=====================================#
#############################################################################################################

#############################################################################################################





#					 #############################
#					 #                           #
#					 #	  DEBUG_RUN	     #
#					 #                           #
#					 #############################

#=============================#
# ==    Valgrind Rules     == #
#=============================#
#############################################################################################################
.PHONY: $(VALGRIND)
$(VALGRIND):		CFLAGS		+=	$(VAL_FLAG)
$(VALGRIND): 		fclean BUILD_LIB $(MAIN) $(OBJ)
	@echo -e	"\n\n"$(FRAME_W)
	@echo -e	"\t\t\t"$(RED_BG)"USING VALGRIND MODE !!!!"$(END)
	@echo -e	$(FRAME_W)"\n\n"
	@echo -e	"\n\n"$(FRAME_D)								| cat
	@echo -e	$(TITLE)"[$(PROJECT)]: Building with following options (ordered):"$(END)	| cat
	@echo -e	"[$(PROJECT)]: CC        = $(CC)"						| cat
	@echo -e	"[$(PROJECT)]: SOURCES   = $(SRC)"						| cat
	@echo -e	"[$(PROJECT)]: OBJECTS   = $(MAIN) $(OBJ)"					| cat
	@echo -e	"[$(PROJECT)]: CFLAGS    = $(CFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: CPPFLAGS  = $(CPPFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDFLAGS   = $(LDFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDLIBS    = $(LDLIBS)"						| cat
	@$(CC) -o $(BIN_NAME) $(MAIN) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)
	@echo -e	$(TASK_OK)"[$(PROJECT) | Compilation] OK\n"$(END)				| cat
#############################################################################################################





#=============================#
# ==       GDB Rules       == #
#=============================#
#############################################################################################################
.PHONY: $(GDB)
$(GDB):			CFLAGS		+=	$(GDB_FLAG)
$(GDB): 		$(MAIN) $(OBJ)
	@echo -e	"\n\n"$(FRAME_W)
	@echo -e	"\t\t\t"$(RED_BG)"GDB MODE !!!!"$(END)
	@echo -e	$(FRAME_W)"\n\n"
	@echo -e	"\n\n"$(FRAME_D)								| cat
	@echo -e	$(TITLE)"[$(PROJECT)]: Building with following options (ordered):"$(END)	| cat
	@echo -e	"[$(PROJECT)]: CC        = $(CC)"						| cat
	@echo -e	"[$(PROJECT)]: SOURCES   = $(SRC)"						| cat
	@echo -e	"[$(PROJECT)]: OBJECTS   = $^"							| cat
	@echo -e	"[$(PROJECT)]: CFLAGS    = $(CFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: CPPFLAGS  = $(CPPFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDFLAGS   = $(LDFLAGS)"						| cat
	@echo -e	"[$(PROJECT)]: LDLIBS    = $(LDLIBS)"						| cat
	@$(CC) -o $(BIN_NAME) $^ $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)
	@echo -e	"[$(PROJECT) | Compilation] OK\n" $(END)					| cat
#############################################################################################################










#					 #############################
#					 #                           #
#					 #	  CLEAN-UP	     #
#					 #                           #
#					 #############################


#===================================#
# ==  Object Files Cleanup Rule  == #
#===================================#
################################################################################
.PHONY: $(obj_clean)
obj_clean:
	@echo -e	"[$(PROJECT)]: Removing object files."						| cat
	@-$(RM)  $(OBJ) $(MAIN:.c=.o)
	@echo -e	"[$(PROJECT)]: Removing lib object files."					| cat
	@-$(RM)  $(LIB_OBJ)
	@echo -e	"[$(PROJECT)]: Removing tests object files (if any)."				| cat
	@-$(RM)  $(TESTS_SRC_DIR)/*.o
	@-$(RM)  *.o





#===================================#
# == Library Files Cleanup Rule  == #
#===================================#
################################################################################
.PHONY: $(lib_clean)
lib_clean:
	@echo -e	"[$(PROJECT)]: Removing library $(LIB_NAME) file."				| cat
	@-$(RM)  $(LD_LIB)





#===================================#
# ==  Tests Files Cleanup Rule   == #
#===================================#
################################################################################
.PHONY: $(tests_clean)
tests_clean:
	@echo -e	"[$(PROJECT)]: Removing coverage files."					| cat
	@-$(RM)  *.gc* $(TESTS_DIR)/src/*.gc*
	@-$(RM)  *.gc* $(LIB_DIR)/*.gc*
	@-$(RM)  *.gc* $(TESTS_DIR)/src/*.o
	@-$(RM)  *.gc* $(TESTS_DIR)/fct/*.o

	@echo -e	"[$(PROJECT)]: Removing test binary."						| cat
	@-$(RM)   $(TESTS_BIN)





#===================================#
# ==     Aclean Cleanup Rule     == #
#===================================#
################################################################################
.PHONY: $(aclean)
aclean: obj_clean lib_clean tests_clean





#===================================#
# ==     Fclean Cleanup Rule     == #
#===================================#
################################################################################
.PHONY: $(fclean)
fclean: aclean
	@echo -e	"[$(PROJECT)]: Removing binary."						| cat
	@-$(RM)   $(BIN_NAME)
	@echo -e	$(TASK_OK)"\n[$(PROJECT)]: Project cleaned !"$(END)				| cat
	@echo -e	$(FRAME_D)"\n\n"





#############################################################################################################
