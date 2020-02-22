/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(strchr, test_1)
{
    char *str = "XDDDDDDDDDDDDDDDDDD";
    char c = 'D';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_2)
{
    char *str = "";
    char c = 'D';

    cr_assert_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_3)
{
    char *str = "AAAAAo";
    char c = 'o';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_4)
{
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAX";
    char c = 'o';

    cr_assert_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_5)
{
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAo";
    char c = 'o';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_6)
{
    size_t sz = 5;
    size_t pos = 4;
    char fill = 'a';
    char c = 'x';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = fill;
    str[sz] = '\0';
    if (pos < sz)
        str[pos] = c;
    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_7)
{
    size_t sz = 500;
    size_t pos = 4;
    char fill = 'a';
    char c = 'x';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = fill;
    str[sz] = '\0';
    if (pos < sz)
        str[pos] = c;
    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_8)
{
    size_t sz = 5000;
    size_t pos = 400;
    char fill = 'x';
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = fill;
    str[sz] = '\0';
    if (pos < sz)
        str[pos] = c;
    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_9)
{
    size_t sz = 500;
    size_t pos = 2;
    char fill = 's';
    char c = 't';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = fill;
    str[sz] = '\0';
    if (pos < sz)
        str[pos] = c;
    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_10)
{
    size_t sz = 10000;
    size_t pos = 500;
    char fill = 'g';
    char c = 'c';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = fill;
    str[sz] = '\0';
    if (pos < sz)
        str[pos] = c;
    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}
