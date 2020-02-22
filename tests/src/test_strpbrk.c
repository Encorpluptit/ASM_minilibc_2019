/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "libasm.h"
#include "tests_run.h"

Test(strpbrk, test_1)
{
    char *s = "zhbdfuazbe";
    char *accept = "a";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_2)
{
    char *s = "zhbdfuazbe";
    char *accept = "z";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_3)
{
    char *s = "zhbdfuazbe";
    char *accept = "az";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_4)
{
    char *s = "zhbdfuazbe";
    char *accept = "";

    cr_assert_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_5)
{
    char *s = "";
    char *accept = "az";

    cr_assert_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_6)
{
    char *s = "zhbdfuazbe";
    char *accept = "$";

    cr_assert_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_7)
{
    char *s = "zhbdfuazbe";
    char *accept = "au";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_8)
{
    char *s = "tDRFYtyughnHgvfTYdrtyfgBnigyu";
    char *accept = "azY";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_9)
{
    char *s = "tDRFYtyughnHgvfTYdrtyfgBnigyu";
    char *accept = "azgY";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}

Test(strpbrk, test_10)
{
    char *s = "tDRFYtyughnHgvfTYdrtyfgBnigyu";
    char *accept = "aBzY";

    cr_assert_str_eq(my_strpbrk(s, accept),
                    __builtin_strpbrk(s, accept));
}
