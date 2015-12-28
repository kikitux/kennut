//
// Created by Alvaro Miranda on 28/12/15.
//

#include <string.h>
#include "lib.h"

struct foo myfunc(struct foo *src, struct foo *dst, size_t len)
{
    strncpy(dst->bar, src->bar, len);
    return *dst;
}