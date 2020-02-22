/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(memcpy, test_1)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '2';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_2)
{
    size_t sz = 60;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '\t';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_3)
{
    size_t sz = 1;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '0';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_4)
{
    size_t sz = 0;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '0';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_5)
{
    size_t sz = 4000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_6)
{
    size_t sz = 0;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_7)
{
    size_t sz = 1;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_8)
{
    size_t sz = 4000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '\t';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_9)
{
    size_t sz = 400000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memcpy, test_10)
{
    size_t sz = 4000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = '\0';

    __builtin_memset(ref, set, sz);
    my_memcpy(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}
