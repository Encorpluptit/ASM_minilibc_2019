##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ifndef MKPRINT
MKPRINT				:= 1


PRINT_PROJ			=	$(shell printf "%.20b" $(PROJECT))
PROJECT_PRINT		=	$(CORANGE)$(CBOLD)
PRINT				=	printf "$(PROJECT_PRINT)%-30b$(RESET)\t" "[ $(PRINT_PROJ) ]:" ; printf

PRINT_LINE			=	printf "$(CDELIM)<"; printf "%0.s-" {1..100}; printf ">$(CRESET)\n"

RESET				:=	\033[0m
RED					:=	\033[0;31m
GREEN				:=	\033[0;32m
YELLOW				:=	\033[0;33m
BLUE				:=	\033[0;34m
CMAGENTA			:=	\033[0;35m
CYAN				:=	\033[1;36m



# Format cleanup
##########################################
CRESET      		:=	\033[0m\n
##########################################

# Colors
##########################################
# \033[38;2;<R>;<G>;<B>m
CRED        		:=	\033[38;2;255;0;0m
CGREEN      		:=	\033[1;32m
CLIGHTGREEN 		:=  \033[38;2;190;255;200m
CBLUE       		:=	\033[38;2;0;0;255m
CLIGHTBLUE  		:=	\033[38;2;88;255;250m
CORANGE     		:=	\033[38;2;255;167;4m
##########################################

# Format
##########################################
CBOLD       		:=  \033[1m
CUNDERLN    		:=  \033[4m
##########################################

CREDBL				:=	$(RED)$(CBOLD)
CDELIM				:=	$(CLIGHTGREEN)$(CBOLD)
##########################################



PCPPFLAGS	= $(foreach flag, $(CPPFLAGS), $(patsubst -iquote%,\%40b-iquote %\n, $(flag)))
PCFLAGS 	= $(foreach flag, $(CFLAGS), %40b$(flag)\n)
PLDLIBS		= $(foreach flag, $(LDLIBS), %40b$(flag)\n)
PLDFLAGS	= $(foreach flag, $(LDFLAGS), %40b$(flag)\n)
PDEBUG		= $(foreach flag, $(DEBUG_FLAGS), %40b$(flag)\n)

# TODO print AR, LD, NA
ifneq ($(PRINT_VARS), 1)
print_project_vars:
else
print_project_vars:
	@-$(PRINT_LINE)
	@$(PRINT) "Compiler = $(CC)\n"
	@$(PRINT) "CFLAGS:\n $(PCFLAGS)\n"
	@$(PRINT) "CPPFLAGS:\n $(PCPPFLAGS)\n"
	@$(PRINT) "DEBUG:\n $(PDEBUG)\n"
	@$(PRINT) "LDLIBS:\n $(PLDLIBS)\n"
	@$(PRINT) "LDFLAGS:\n $(PLDFLAGS)\n"
endif # PRINT_VARS


PGCOVR_FLAGS	= $(foreach flag, $(GCOVR_FLAGS), %40b$(flag)\n)
COMMA:=,
SPLIT_UT_WRAP_FLAGS	= $(subst $(COMMA), ,$(UT_WRAP_FLAGS))
PUT_WRAP_FLAGS	= $(foreach flag, $(SPLIT_UT_WRAP_FLAGS), %40b$(flag)\n)

ifneq ($(PRINT_VARS), 1)
print_tests_vars:
else
print_tests_vars: print_project_vars
	@$(PRINT) "GCOVR_FLAGS:\n $(PGCOVR_FLAGS)\n"
	@$(PRINT) "UT_WRAP_FLAGS:\n $(PUT_WRAP_FLAGS)\n"
endif # PRINT_VARS


print_header:
	@-$(PRINT_LINE)
	@-$(PRINT) "$(CLIGHTGREEN)$(CBOLD)%s$(CRESET)\n" "Compiling $(PROJECT) → $(BINARY)"


print_tests_header:
	@-$(PRINT_LINE)
	@-$(PRINT) "$(CLIGHTGREEN)$(CBOLD)%s$(CRESET)\n" "Compiling $(PROJECT) → $(CRITERION_BIN)"


# TODO: Add print for ASM Project (NASMFLAGS NA)


endif # MKPRINT
