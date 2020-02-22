/*
** EPITECH PROJECT, 2020
** MiniLibC
** File description:
** Tests source file.
*/

#include "tests_run.h"

Test(strcasecmp, test_1)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_2)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_3)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_4)
{
    char *ref = "";
    char *test = "";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_5)
{
    char *ref = "a";
    char *test = "a";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_6)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_7)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_8)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_9)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 0;

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_10)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_11)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_12)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_13)
{
    char *ref = "LOOOOOL";
    char *test = "LOOAOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_14)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOAOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_15)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOAOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_16)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_17)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_18)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_19)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_20)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_21)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_22)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_23)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_24)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_25)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_26)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_27)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_28)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_29)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_30)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_31)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_32)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_33)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_34)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_35)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_36)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_37)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_38)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_39)
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
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_40)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_41)
{
    char *ref = "LooooooooooooL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_42)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LooooooooooooL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_43)
{
    char *ref = "looooooooooooL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_44)
{
    char *ref = "LOOOOOOOOOOOOL";
    char *test = "LoooooL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_45)
{
    char *ref = "LoooooL";
    char *test = "LOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_46)
{
    char *ref = "LOOOOOL";
    char *test = "LooooooooL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_47)
{
    char *ref = "a";
    char *test = "a";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_48)
{
    char *ref = "a";
    char *test = "A";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_49)
{
    char *ref = "a";
    char *test = "A";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_50)
{
    char *ref = "A";
    char *test = "A";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_51)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '2';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_52)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_53)
{
    size_t sz = 10000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = '8';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_54)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_55)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'a';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_56)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_57)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_58)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'A';

    __builtin_memset(ref, set + ' ', sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_59)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set + ' ', sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_60)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_61)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_62)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_63)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_64)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';

    __builtin_memset(ref, set + ' ', sz);
    __builtin_memset(test, set, sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_65)
{
    size_t sz = 1000;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set + ' ', sz);
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_66)
{
    char *ref = "loaooooooooool";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_67)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "looooooooooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_68)
{
    char *ref = "loaooooooooool";
    char *test = "looooooooooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_69)
{
    char *ref = "LOAOOOOOOOOOOL";
    char *test = "LOOOOOOOOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_70)
{
    char *ref = "looooooooooaol";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_71)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "loooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_72)
{
    char *ref = "looooooooooaol";
    char *test = "loooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_73)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_74)
{
    char *ref = "loooool";
    char *test = "LOOAOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}
Test(strcasecmp, test_75)
{
    char *ref = "LOOOOOL";
    char *test = "looaoooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_76)
{
    char *ref = "loooool";
    char *test = "looaoooool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_77)
{
    char *ref = "LOOOOOL";
    char *test = "LOOAOOOOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_78)
{
    char *ref = "looooooooooaol";
    char *test = "LOOAOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_79)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "looaool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_80)
{
    char *ref = "looooooooooaol";
    char *test = "looaool";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_81)
{
    char *ref = "LOOOOOOOOOOAOL";
    char *test = "LOOAOOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_82)
{
    char *ref = "loooool";
    char *test = "LOOOOOOAOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_83)
{
    char *ref = "LOOOOOL";
    char *test = "looooooaol";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_84)
{
    char *ref = "loooool";
    char *test = "looooooaol";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_85)
{
    char *ref = "LOOOOOL";
    char *test = "LOOOOOOAOL";

    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
}

Test(strcasecmp, test_86)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_87)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_88)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_89)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_90)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_91)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_92)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c + ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_93)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[pos] = c + ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_94)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'A';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[pos] = c + ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_95)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c - ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_96)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set - ' ', sz);
    __builtin_memset(test, set, sz);
    test[pos] = c - ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_97)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'p';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set - ' ', sz);
    test[pos] = c - ' ';
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_98)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_99)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set + ' ', sz);
    __builtin_memset(test, set, sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}

Test(strcasecmp, test_100)
{
    size_t sz = 25;
    char *test = malloc(sizeof(char) * (sz + 1));
    char *ref = malloc(sizeof(char) * (sz + 1));
    int set = 'P';
    size_t pos = 5;
    char c = 'a';

    __builtin_memset(ref, set, sz);
    __builtin_memset(test, set + ' ', sz);
    test[pos] = c;
    test[sz] = '\0';
    ref[sz] = '\0';
    ASSERT_INT(my_strcasecmp(ref, test), __builtin_strcasecmp(ref, test));
    free(test);
    free(ref);
}
