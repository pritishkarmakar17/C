#include <stdio.h>

int main()
{
    int i,age;

    for (i=0; i < 5  ; i++)
    {
        printf("%d Enter your age: \n",i);
        scanf("%d", &age);

        if (age>10)
        {
            continue;
        }
        
        printf("couldnot find cotinue statement\n");
    }
    
    return 0;
}
