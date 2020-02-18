/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** header for function prototypes for test main
*/

#ifndef _MINILIBC_H_
#define _MINILIBC_H_

#include <stddef.h>

#ifndef _TESTS_
size_t strlen(const char *s);

char *strchr(const char *s, int c);

void *memset(void *s, int c, size_t n);

#else

size_t _strlen(const char *s);

char *_strchr(const char *s, int c);

void *_memset(void *s, int c, size_t n);

#endif /* _TESTS_ */

#endif /* _MINILIBC_H_ */
