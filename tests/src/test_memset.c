/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

Test(memset, test_1)
{
    size_t sz = 5;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'a';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_2)
{
    size_t sz = 100;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'b';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_3)
{
    size_t sz = 50;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'x';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_4)
{
    size_t sz = 10;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 1;

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_5)
{
    size_t sz = 4000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_6)
{
    size_t sz = 5000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'l';

    test[sz] = '\0';
    ref[sz] = '\0';
    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_7)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_8)
{
    size_t sz = 100000;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'l';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_9)
{
    size_t sz = 0;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'a';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}

Test(memset, test_10)
{
    size_t sz = 1;
    char *test = malloc(sizeof(char) * (sz));
    char *ref = malloc(sizeof(char) * (sz));
    int set = 'a';

    __builtin_memset(ref, set, sz);
    my_memset(test, set, sz);
    cr_assert_str_eq(test, ref);
    free(test);
    free(ref);
}
