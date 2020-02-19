/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

Test(strcmp, test_1)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_2)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_3)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_4)
{
    char *ref = "";
    char *test = "";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_5)
{
    char *ref = "a";
    char *test = "a";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_6)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_7)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_8)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_9)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_10)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}
