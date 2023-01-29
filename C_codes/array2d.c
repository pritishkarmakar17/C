# include <stdio.h>

int main()
{
    int marks[2][4]={{2,3,4,8},{1,5,9,7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("element of row %d & column %d is %d\n",i,j,marks[i][j]);

            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
