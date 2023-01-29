# include <stdio.h>

int main()
{
    int num;

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("%d enter a number [press 0 to exit]",j);
            scanf("%d",& num);
            if (num==0)
            {
                goto ending;
            }
                
        }
        
    }
    ending:
    return 0;
}
