/*
** EPITECH PROJECT, 2019
** Any Project
** File description:
** Header for Unit Test using criterion.
*/

#ifndef __TESTS_RUN_H__
#define __TESTS_RUN_H__

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include <stdbool.h>

static inline void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

#define ASSERT_INT(a, b) cr_assert_eq(a, b, "Expected %d, got %d\n", b, a)

size_t my_strlen(const char *s);
char *my_strchr(const char *s, int c);
void *my_memset(void *s, int c, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, size_t n);
int my_strncmp(const char *s1, const char *s2, size_t n);
char *my_rindex(const char *s, int c);
void *my_memmove(void *dest, const void *src, size_t n);
char *my_strstr(const char *haystack, const char *needle);
int my_strcasecmp(const char *s1, const char *s2);
char *my_strpbrk(const char *s, const char *accept);
size_t my_strcspn(const char *s, const char *reject);

#endif /* __TESTS_RUN_H__ */
