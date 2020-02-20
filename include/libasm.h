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
size_t _strlen(const char *s);
size_t my_strlen(const char *s);

char *strchr(const char *s, int c);
char *_strchr(const char *s, int c);
char *my_strchr(const char *s, int c);

void *memset(void *s, int c, size_t n);
void *_memset(void *s, int c, size_t n);
void *my_memset(void *s, int c, size_t n);

void *memcpy(void *dest, const void *src, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);

int strcmp(const char *s1, const char *s2);
int _strcmp(const char *s1, const char *s2);
int my_strcmp(const char *s1, const char *s2);

int strncmp(const char *s1, const char *s2, size_t n);
int _strncmp(const char *s1, const char *s2, size_t n);
int my_strncmp(const char *s1, const char *s2, size_t n);

int strncmp(const char *s1, const char *s2, size_t n);
int _strncmp(const char *s1, const char *s2, size_t n);
int my_strncmp(const char *s1, const char *s2, size_t n);

char *rindex(const char *s, int c);
char *_rindex(const char *s, int c);
char *my_rindex(const char *s, int c);

#endif /* _MINILIBC_H_ */
