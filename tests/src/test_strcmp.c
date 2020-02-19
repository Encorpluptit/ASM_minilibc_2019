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

Test(strcmp, test_11)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_12)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_13)
{
    char *ref = "LOOOOOL";
    char *test = "LOOAOOOOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_14)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOAOOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_15)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOAOL";

    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_16)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_17)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_18)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_19)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_20)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 20;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_21)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';
    size_t pos = 5;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_22)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_23)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_24)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_25)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_26)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_27)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_28)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_29)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_30)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_31)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_32)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_33)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_34)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_35)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_36)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_37)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_38)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 40;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_39)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;
    size_t pos = 24;
    char c = 'B';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    ref[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcmp(ref, test), __builtin_strcmp(ref, test));
}

Test(strcmp, test_40)
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
