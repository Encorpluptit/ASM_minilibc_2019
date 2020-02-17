/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

Test(strchr, test_1) {
    char *str = "XDDDDDDDDDDDDDDDDDD";
    char c = 'D';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_2) {
    char *str = "";
    char c = 'D';

    cr_assert_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_3) {
    char *str = "AAAAAo";
    char c = 'o';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_4) {
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAX";
    char c = 'o';

    cr_assert_eq(__builtin_strchr(str, c), my_strchr(str, c));
}

Test(strchr, test_5) {
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAo";
    char c = 'o';

    cr_assert_str_eq(__builtin_strchr(str, c), my_strchr(str, c));
}
