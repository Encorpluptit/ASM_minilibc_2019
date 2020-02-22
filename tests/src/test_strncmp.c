/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(strncmp, test_1)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_2)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_3)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_4)
{
    char *ref = "";
    char *test = "";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_5)
{
    char *ref = "a";
    char *test = "a";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_6)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_7)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_8)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_9)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_10)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_11)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_12)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_13)
{
    char *ref = "LOOOOOL";
    char *test = "LOOAOOOOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_14)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOAOOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_15)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOAOL";
    size_t n = __builtin_strlen(ref) + 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_16)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_17)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_18)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_19)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_20)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_21)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_22)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_23)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_24)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_25)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_26)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_27)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_28)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_29)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_30)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_31)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_32)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_33)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_34)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_35)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_36)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_37)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_38)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_39)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_40)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t n = __builtin_strlen(ref) + 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_41)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";
    size_t n = __builtin_strlen(ref) - 5;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_42)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOL";
    size_t n = __builtin_strlen(ref) - 7;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_43)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOOOL";
    size_t n = __builtin_strlen(ref) - 3;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_44)
{
    char *ref = "";
    char *test = "";
    size_t n = __builtin_strlen(ref);

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_45)
{
    char *ref = "a";
    char *test = "a";
    size_t n = __builtin_strlen(ref) - 1;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_46)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_47)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_48)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_49)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_50)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_51)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";
    size_t n = __builtin_strlen(ref) - 5;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_52)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOOOOL";
    size_t n = __builtin_strlen(ref) - 2;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_53)
{
    char *ref = "LOOOOOL";
    char *test = "LOOAOOOOOL";
    size_t n = __builtin_strlen(ref) - 3;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_54)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOAOOL";
    size_t n = __builtin_strlen(ref) - 10;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_55)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOAOL";
    size_t n = __builtin_strlen(ref) - 5;

    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_56)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_57)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_58)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_59)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_60)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_61)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_62)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_63)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_64)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_65)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_66)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_67)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_68)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_69)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_70)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_71)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_72)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_73)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_74)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_75)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_76)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_77)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_78)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_79)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}

Test(strncmp, test_80)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t n = __builtin_strlen(ref) - 10;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strncmp(ref, test, n), __builtin_strncmp(ref, test, n));
}
