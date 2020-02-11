/*
** EPITECH PROJECT, 2019
** Any project.
** File description:
** Wrapping malloc for unit tests purposes.
*/

#include <errno.h>
#include "tests_run.h"

bool malloc_fail(bool set, int val)
{
    static int count = 0;

    if (set)
        count = val;
    else
        count--;
    return count == 0;
}

void *wrap_malloc(size_t s)
{
    if (SHOULD_MALLOC_FAIL()) {
        errno = ENOMEM;
        return NULL;
    }
    return REAL_MALLOC(s);
}
