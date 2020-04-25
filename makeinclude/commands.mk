##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

ifndef MKCMDS
MKCMDS				:= 1


SHELL				?= 	$(shell which bash)
RM					:=	rm -f
CP					:=	cp -t
MV					:=	mv -t
GCOVR				:=	gcovr
GCOV				:=	gcov
CC					:=	gcc
MAKE				:=	make --no-print-directory
MAKE_MK				=	$(MAKE) --no-print-directory -C $(1) $(2);
AS					:=	nasm
AR					:=	ar rc
LD					:=	ld

endif # MKCMDS
