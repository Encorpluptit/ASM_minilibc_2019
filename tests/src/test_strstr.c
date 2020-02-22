/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(strstr, test_1)
{
    char *haystack = "LOOOOOOOOOOOOL";
    char *needle = "LOOOOOOOOOOOOL";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_2)
{
    char *haystack = "LOOOOOOOOOOOOL";
    char *needle = "OOOOL";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_3)
{
    char *haystack = "LOOOOOOOOOOOOL";
    char *needle = "LOOOOOOOOO";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_4)
{
    char *haystack = "LOOOOOOOOOOOOL";
    char *needle = "OL";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_5)
{
    char *haystack = "ezvbafvuhaqebvipchneidcb";
    char *needle = "pc";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_6)
{
    char *haystack = "nhdqicbqushdbcjlqsd";
    char *needle = "c";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_7)
{
    char *haystack = "ijdqfnlcjknqslkncklqsd,";
    char *needle = "qs";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));

}

Test(strstr, test_8)
{
    char *haystack = "dskjqncjsqbdcjkhbsqdc";
    char *needle = "a";

    cr_assert_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_9)
{
    char *haystack = "dsjknckqsjdncvlkqnsdkjn";
    char *needle = "sdkjfnkjsd";

    cr_assert_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_10)
{
    char *haystack = "sdkqjbcjqbd";
    char *needle = "bcj";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_11)
{
    char *haystack = "fazcdaiyjkpcùkmjb  ";
    char *needle = " ";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_12)
{
    char *haystack = "lsdkncfojsndjnf\tajihdbuazvbd ";
    char *needle = "\ta";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_13)
{
    char *haystack = "dsjncjhsbdchbsdhkJNOPAKPLX;MX; LJf";
    char *needle = ";MX;";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_14)
{
    char *haystack = "ERIUHYAGOPOPM HDUJIK,ZKNJBSCHUQHJ ,";
    char *needle = " ,";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_15)
{
    char *haystack = "juiauopĉvl;, n,;s§F!zzlkjkerkf,";
    char *needle = "§F";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_16)
{
    char *haystack = "sqdjbqsd";
    char *needle = "";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_17)
{
    char *haystack = "";
    char *needle = "sdnckjqsdnckjn";

    cr_assert_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_18)
{
    char *haystack = "dsqjncihbzc zefhizepojfkaùnjclbhvj";
    char *needle = "ù";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_19)
{
    char *haystack = "SALUTSALOTSALTTSALP";
    char *needle = "SALT";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}

Test(strstr, test_20)
{
    char *haystack = "dscsdfnvjsdkn";
    char *needle = "fnv";

    cr_assert_str_eq(my_strstr(haystack, needle),
                    __builtin_strstr(haystack, needle));
}
