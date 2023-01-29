# include <stdio.h>

int main()
{
    //pointer 

    int a;
    int* ptr_a = &a; //save the address of a in the pointer ptr_a

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",&a); //format for the address print-> p
    printf("the pointer of a is %p\n",ptr_a); 
    printf("the value of the pointer of a is %d\n",*ptr_a); // to get the output of a from the pointer 
    printf("the address of the pointer is %p\n",&ptr_a); //to print address -> &var_name

    // NULL pointer ->  when the pointer variable isn't assigned
    int* ptr;
    printf("address of some garbage is %p\n",ptr);

    int* ptr1 = NULL;
    printf("NULL pointer is %p\n",ptr);
    printf("address of NULL pointer is %p\n", &ptr);
    //printf("value of NULL pointer is %d\n", *ptr);

    return 0;
}
