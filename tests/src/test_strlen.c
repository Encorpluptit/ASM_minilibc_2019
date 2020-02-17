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
