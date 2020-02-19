/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    return _strncmp(s1, s2, n);
}
