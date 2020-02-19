/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

Test(strlen, test_1) {
    char *str = "XDDDDDDDDDDDDDDDDDD";

    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_2) {
    char *str = "";

    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_3) {
    char *str = "LOL";

    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_4) {
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";

    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_5) {
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";

    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_6) {
    size_t sz = 5;
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_7) {
    size_t sz = 5000;
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_8) {
    size_t sz = 10000;
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_9) {
    size_t sz = 100000;
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}

Test(strlen, test_10) {
    size_t sz = 1000000;
    char c = 'a';
    char *str = malloc(sizeof(char) * (sz + 1));

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    ASSERT_INT(__builtin_strlen(str), my_strlen(str));
}
