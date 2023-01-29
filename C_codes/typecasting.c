#include <stdio.h>
//for typecasting: (type) value

int main()
{
    int a= 3;
    float b = 45;
    float c = 15/4; // the form is (int/int) not in (float/float)
    float d = (float) 15/4;

    // printf("The value of b is %d\n", b); // wrong type
    printf("the value of c is %f\n", c);
    printf("the value of d is %f\n", d);
    printf("The value of b is %d\n", (int)b);
    return 0;
}
