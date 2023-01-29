#include <stdio.h>
int main()
{
    int num, index=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        printf("%d\n", index);
        index ++; //index = index + 1
    } while (index<10);
    
    return 0;
}
