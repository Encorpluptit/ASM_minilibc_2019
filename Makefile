##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

###############################################################################
# Make includes
include ./makeinclude/commands.mk
###############################################################################


###############################################################################
# Project Configuration
PROJECT			:=	Mini LibC
NAME				:=	asm
BINARY				:=	lib$(NAME).so

# Use Clang (set to 1 tu use clang, 0 to use gcc)
USE_CLANG			:=	0
# Compilation Process (set to 1 to add strict flags like -Werror ... )
PRODUCTION			:=	0
# If Compilation variables should be print when launching rules
PRINT_VARS			:=	1
PRINT_OBJ			:=	1
###############################################################################


###############################################################################
# Project Architecture
PROJECT_DIR			:=	.
INCLUDE_DIR			:=	include
SRC_DIR				:=	src
LIBS_DIR			:=	lib
TESTS_DIR			:=	tests
###############################################################################


###############################################################################
# Sources/Includes/Test Files Required for Compilation
INCLUDE_DIRS		=						\
	include									\
	include/essentials						\

MAIN_FILE			:=	main.c

SOURCES				:=						\
					strlen.asm					\
					strchr.asm					\
					memset.asm					\
					memcpy.asm					\
					memmove.asm					\
					strcmp.asm					\
					strncmp.asm					\
					rindex.asm					\
					strstr.asm					\
					strcasecmp.asm					\
					strpbrk.asm					\
					strcspn.asm					\

TESTS_FILES			:=					\
				test_strlen.c				\
				test_strchr.c				\
				test_memset.c				\
				test_memcpy.c				\
				test_memmove.c				\
				test_strcmp.c				\
				test_strncmp.c				\
				test_rindex.c				\
				test_strstr.c				\
				test_strcasecmp.c			\
				test_strpbrk.c				\
				test_strcspn.c				\

LIBS	:=									\


CFLAGS				:=	-Wall -Wextra
DEBUG_FLAGS			:=
CPPFLAGS			+=
LDLIBS				+=
#LDFLAGS				+=	-Llib
LDSHARED			+=	-shared -fPIC
ASFLAGS				+=	-felf64


###############################################################################
# Makefile includes Compilation, Tests and Print once Project Configured
include ./makeinclude/compilation.mk
include ./makeinclude/tests.mk
include ./makeinclude/print.mk
###############################################################################


.DEFAULT: all

all: $(NAME)

###############################################################################
# Available rules:
#	- executable 				(below)
#	- StaticLib / SharedLib		(makeinclude/compilation.mk)
#	- debug / gdb 				(makeinclude/compilation.mk)
$(NAME): SharedLib
###############################################################################


executable: LIBS_MAKE print_header $(PROJECT_OBJECTS) print_project_vars
	@$(CC) -o $(BINARY) $(PROJECT_OBJECTS) $(LDLIBS) $(LDFLAGS) $(DEBUG_FLAGS)
	@-$(PRINT_LINE)
