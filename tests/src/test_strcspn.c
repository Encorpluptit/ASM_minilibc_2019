/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(strcspn, test_1)
{
    char *s = "lol";
    char *reject = "lo";

    ASSERT_INT(my_strcspn(s, reject), 0);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_2)
{
    char *s = "lol";
    char *reject = "ol";

    ASSERT_INT(my_strcspn(s, reject), 0);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_3)
{
    char *s = "lol";
    char *reject = "o";

    ASSERT_INT(my_strcspn(s, reject), 1);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_4)
{
    char *s = "loa";
    char *reject = "a";

    ASSERT_INT(my_strcspn(s, reject), 2);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_5)
{
    char *s = "loa";
    char *reject = "e";

    ASSERT_INT(my_strcspn(s, reject), 3);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_6)
{
    char *s = "";
    char *reject = "e";

    ASSERT_INT(my_strcspn(s, reject), 0);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}

Test(strcspn, test_7)
{
    char *s = "loa";
    char *reject = "";

    ASSERT_INT(my_strcspn(s, reject), 3);
    ASSERT_INT(my_strcspn(s, reject), __builtin_strcspn(s, reject));
}
