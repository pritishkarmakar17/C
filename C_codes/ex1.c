# include <stdio.h>
/*
input
print multiplication table in petty form
example 
Enter the number you want multiplication table
6
output
Table of 6:

6 x 1 = 6
6 x 2 = 12
.
.
6 x 10 = 60
*/


int main()
{
    int i;
    for(i=1; i<11; i++)
    {
        printf("6 x %i = %i\n",i,6*i);
    }
    return 0;
}
