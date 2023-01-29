# include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("your entered age: %d\n",age);
    if (age>=18)
    {
        printf("you can vote\n");
    }
    else if (age>15) //if previous if-statement is false
    {
        printf("you can apply\n");
    }
    
    else //if all if-ststement is false
    {
        printf("you cant vote\n");
    }
    
    return 0;
}
