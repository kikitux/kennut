//
// Created by Alvaro Miranda on 28/12/15.
//

#ifndef KENNUT_LIB_H
#define KENNUT_LIB_H

struct foo {
    char bar[20];
};

struct foo myfunc(struct foo *src, struct foo *dst, size_t len);
#endif //KENNUT_LIB_H
