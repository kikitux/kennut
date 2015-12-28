#include <stdio.h>
#include <string.h>
#include "lib.h"


int main()
{
    struct foo s, d;
    strcpy(s.bar, "some string");

    myfunc(&s, &d);

    printf("%s\n", d.bar);

    return 0;
}