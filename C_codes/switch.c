# include <stdio.h>

/*
switch exxpression -> int or char
case value -> int or char
*/

int main()
{
    int age,marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (age)            // switch start
    {
    case 18:
        printf("the age is 18\n");

        switch (marks)            // switch inside the switch
        {
        case 100:
            printf("Full marks");
            break;
        
        default:
            printf("Passed");
        }
        break;
    
    case 10:
        printf("the age is 10");
        break;
    
    case 5:
        printf("the age is 5");
        break;
    
    default:
    printf("the age is not 5, 10 or 18");
        break;
    }
    printf("\n");
}


    