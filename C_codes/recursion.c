# include <stdio.h>

int factorial(int number);

int main()
{
    int num;

    printf("Enter a number you want the favtorial of: ");
    scanf("%d", &num);
    
    printf("the factorial of the number %d is %d\n", num, factorial(num));
    
    return 0;
}

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    else
    {
        return (number*factorial(number-1));
    }

}