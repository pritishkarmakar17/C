# include <stdio.h>

int main()
{
    int a = 26;
    int* ptra = &a;

    printf("%d\n",ptra);
    printf("%d\n",ptra+1); //added sizeof(int) = 4
    printf("%d\n",ptra+2); //added 2*sizeof(int) = 8 

    return 0;
}