/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** header for function prototypes for test main
*/

#ifndef _MINILIBC_H_
#define _MINILIBC_H_

#include <stddef.h>
#include <unistd.h>

size_t strlen(const char *s);
char *strchr(const char *s, int c);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *rindex(const char *s, int c);
void *memmove(void *dest, const void *src, size_t n);
char *strstr(const char *haystack, const char *needle);
int strcasecmp(const char *s1, const char *s2);
char *strpbrk(const char *s, const char *accept);
size_t strcspn(const char *s, const char *reject);

#endif /* _MINILIBC_H_ */
