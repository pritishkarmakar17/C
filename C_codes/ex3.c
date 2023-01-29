# include <stdio.h>
// fibonacci sequence  

int fibonacci(int k)
{
    if (k==0)
    {
        return 0;
    }
    
    if (k==1)
    {
        return 1;
    }

    else
        return fibonacci(k-1)+fibonacci(k-2);
}

int main()
{
    int n;
    printf("Enter the length of fibonacci seq you want: ");
    scanf("%d", &n);
    
    printf("The fibonacci seq: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibonacci(i));
    }
    
    
    printf("\n");

    return 0;
}
