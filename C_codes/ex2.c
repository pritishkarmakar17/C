# include <stdio.h>

int main()
{
    int index = 5;
    double km, mile, inch, cm, pound; 

    printf("WELCOME TO UNIT CONVERTER\n");
    printf("kms to mile PRESS 1\ninches to foot PRESS 2\ncms to inches PRESS 3\npound to kgs PRESS 4\n");
    printf("for exit PRESS 0\n");

    while (index!=0)
    {
            printf("Your choice: ");
    scanf("%d",&index);
    
    switch (index)
    {
    case 1:
        printf("Enter in kms: ");
        scanf("%lf",&km);

        printf("in miles: %lf", km*0.62137);
        break;

    case 2:
        printf("Enter in inches: ");
        scanf("%lf",&inch);

        printf("in foot: %lf", inch*0.08333);
        break;

    case 3:
        printf("Enter in cms: ");
        scanf("%lf",&cm);

        printf("in inches: %lf", cm*0.393701);
        break;

    case 4:
        printf("Enter in pounds: ");
        scanf("%lf",&pound);

        printf("in kgs: %lf", pound*0.453592);
        break;
    
    case 0:
        printf("EXIT");
        break;
    }

    printf("\n");

    }
    
    return 0;
}
