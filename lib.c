//
// Created by Alvaro Miranda on 28/12/15.
//

#include <string.h>
#include "lib.h"

struct foo myfunc(struct foo *src, struct foo *dst){
    strncpy(dst->bar, src->bar, sizeof(dst->bar));
    return *dst;
}