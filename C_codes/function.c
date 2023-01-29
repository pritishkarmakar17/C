# include <stdio.h>

int sum(int a, int b);

void star(int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%c",'*'); // 'char' but "str"
    }
    printf("\n");
}

int takeno()
{
    int i;
    printf("enter a number: ");
    scanf("%d",&i);
    return i;
}

void thanks(void);

int main()
{
    int a,b,c;
    
    a = takeno();
    star(a);
    
    b= takeno();
    star(b);
    
    c = sum(a,b);
    printf("The sum is %d\n", c);
    star(c);

    thanks();

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

void thanks(void)
{
    printf("Thanks for using C :-)\n");
}