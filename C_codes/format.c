#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.33;

    printf("output: %10.4f end\n", a/b); // gap before the float

    printf("output: %-10.4f end\n", a/b); // gap after the float

    return 0;
}
