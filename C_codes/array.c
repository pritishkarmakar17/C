# include <stdio.h>

int main()
{
    int marks[4]; 
    marks[0]=34;
    marks[0]=25; // 0th value is updated
    marks[1]=29;
    marks[2]=13;
    marks[3]=15;

    int score[4]={4,15,23,55}; // another way to make array
    //int score[]={4,15,23,55}; //also ok

    //take values and print by for loop

    int values[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &values[i]);
    }

    printf("\n");

    for (int j = 0; j < 4; j++)
    {
        printf("in values, element %d is %d\n", j, values[j]);
    }
    
    printf("\n");

    for (int k = 0; k < 4; k++)
    {
        printf("in score, element %d is %d\n", k, score[k]);
    }

    printf("\n");

    for (int n = 0; n < 4; n++)
    {
        printf("in marks, element %d is %d\n", n, marks[n]);
    }

    return 0;
}
