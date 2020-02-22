/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(rindex, test_1)
{
    char *str = "LOOOOOOOOOAOOOOOL";
    char c = 'A';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_2)
{
    char *str = "LOOOOOOOOOAOOOOOL";
    char c = 'B';

    cr_assert_null(my_rindex(str, c));
}

Test(rindex, test_3)
{
    char *str = "LOOOOOOOOOAOOOOOL";
    char c = 'L';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_4)
{
    char *str = "LOOOOOOOOOAOOOOOL";
    char c = '\0';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_5)
{
    char *str = "";
    char c = 'A';

    cr_assert_null(my_rindex(str, c));
}

Test(rindex, test_6)
{
    char *str = "";
    char c = '\0';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_7)
{
    char *str = "LOAOCOXOOBAOOAOBL";
    char c = 'A';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_8)
{
    char *str = "CLODOOBOCOOAOCODBL";
    char c = 'C';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_9)
{
    char *str = "AAAAAAAAAAAAAAAAAAAAAAAAA";
    char c = 'A';

    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}

Test(rindex, test_10)
{
    size_t sz = 10;
    char *str = malloc(sizeof(char) * (sz + 1));
    char c = 'A';

    for (size_t i = 0; i < sz; ++i)
        str[i] = c;
    str[sz] = '\0';
    cr_assert_str_eq(__builtin_rindex(str, c), my_rindex(str, c));
}
