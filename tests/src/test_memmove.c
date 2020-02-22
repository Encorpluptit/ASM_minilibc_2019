/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(memmove, test_1)
{
    char str1[] = "Geeks";
    char str2[] = "Hello";

    my_memmove(str1, str2, sizeof(str2));
    cr_assert_str_eq(str1, str2);
}

Test(memmove, test_2)
{
    size_t sz = 3;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = "lol";

    __builtin_memset(test, 0, sz + 1);
    my_memmove(test, ref, sz);
    cr_assert_str_eq(test, ref);
    free(test);
}

Test(memmove, test_3)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aaaol");

    my_memmove(test, ref, sz);
    cr_assert_str_eq(test, "lolol");
    free(test);
}

Test(memmove, test_4)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aaaaaaaaa");

    my_memmove(test, ref, sz);
    cr_assert_str_eq(test, "lolaaaaaa");
    free(test);
}

Test(memmove, test_5)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aaaaaaaaa");

    my_memmove(test + 3, ref, sz);
    cr_assert_str_eq(test, "aaalolaaa");
    free(test);
}

Test(memmove, test_6)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aaaaaaaaa");

    my_memmove(test + 6, ref, sz);
    cr_assert_str_eq(test, "aaaaaalol");
    free(test);
}

Test(memmove, test_7)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aaaaaaaaa");

    my_memmove(test + 6, ref, sz);
    cr_assert_str_eq(test, "aaaaaalol");
    free(test);
}

Test(memmove, test_8)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aezfsidhbvba");

    cr_assert_str_eq(my_memmove(test + 6, ref, sz),
                    __builtin_memmove(test + 6, ref, sz));
    free(test);
}

Test(memmove, test_9)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aezfsidhbvba");

    cr_assert_str_eq(my_memmove(test, ref, sz),
                    __builtin_memmove(test, ref, sz));
    free(test);
}

Test(memmove, test_10)
{
    size_t sz = 3;
    char *ref = "lol";
    char *test = strdup("aezfsidhbvba");

    cr_assert_str_eq(my_memmove(test + 10, ref, sz),
                    __builtin_memmove(test + 10, ref, sz));
    free(test);
}
