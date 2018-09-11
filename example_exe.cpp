#include <stdio.h>
#include "example_dll.h"

int main(void)
{
        hello("World");
        printf("%d\n", addStuff(4, 5));

        return 0;
}
