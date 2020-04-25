##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ifndef MKTESTS
MKTESTS				:=	1

TESTS_DIR			:=	$(PROJECT_DIR)/$(TESTS_DIR)
TESTS_SOURCES_DIR	:=	src
TESTS_WRAPS_DIR		:=	wraps

###############################################################################
# Setup Path for Project Files from Project Config
TESTS_SOURCES		=	$(addprefix $(TESTS_DIR)/$(TESTS_SOURCES_DIR)/, $(TESTS_FILES))

TESTS_WRAPS_SOURCES	=	$(addprefix $(TESTS_DIR)/$(TESTS_WRAPS_DIR)/, $(TESTS_WRAPS_FILES))

###############################################################################
# Setup Rules for Object Compilation
TESTS_OBJECTS		=	$(TESTS_SOURCES:.c=.o)

###############################################################################
# Setup Path for Project Files from Project Config
TESTS_INCLUDES_DIRS	:=						\
	include									\


TESTS_WRAPS_FILES	:=						\
	wrap_malloc.c							\
	wrap_open.c								\
	wrap_read.c								\
	wrap_stat.c								\
	wrap_write.c							\


TESTS_INCLUDES		:=	$(foreach dir, $(TESTS_INCLUDES_DIRS), $(TESTS_DIR)/$(dir))

TESTS_CPPFLAGS		:=	$(foreach dir, $(TESTS_INCLUDES), -iquote$ $(dir))
TESTS_CPPFLAGS		+=	-DTESTS

CRITERION_BIN		:=	unit_tests
CRITERION_LIB		:=	-lcriterion
CRITERION_FLAGS		:=	--coverage -fprofile-arcs -ftest-coverage
CRITERION_RUN_FLAGS	:=	-S --timeout 5 --always-succeed

GCOVR_EXCLUDE		:=	tests|lib
GCOVR_FLAGS			:=	-s --exclude='$(GCOVR_EXCLUDE)'
GCOVR_FLAGS			+=	--exclude-unreachable-branches
GCOVR_FLAGS			+=	--exclude='.*test_.*' --exclude='.*wrap_.*'

COV_GCNO			:=	$(OBJECTS:.o=.gcno)
COV_GCDA			:=	$(OBJECTS:.o=.gcda)
COV_FILES     		:=	$(COV_GCNO) $(COV_GCDA) $(PROJECT_DIR)/*.c.gcov
TESTS_COV_FILES     :=	$(TESTS_OBJECTS:.o=.gc*)


tests_run: CPPFLAGS	+=	$(TESTS_CPPFLAGS)
tests_run: LDLIBS	+=	$(CRITERION_LIB)
tests_run: CFLAGS 	+= 	$(CRITERION_FLAGS)
tests_run: fclean LIBS_MAKE print_tests_header $(OBJECTS) $(TESTS_OBJECTS) print_tests_vars
	@-$(PRINT_LINE)
	@$(CC) -o $(CRITERION_BIN) $(OBJECTS) $(CRITERION_FLAGS) $(TESTS_OBJECTS) $(LDLIBS) $(LDFLAGS)
	@./$(CRITERION_BIN) $(CRITERION_RUN_FLAGS)


endif # MKTESTS
