#include <stdio.h>
#include "example_dll.h"

__stdcall void hello(const char *s)
{
    printf("Hello %s\n", s);
}
int addStuff(int x, int y)
{
    return (x+y);
}
