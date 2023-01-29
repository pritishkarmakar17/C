#include <stdio.h>

int main()
{
    label: 
    printf("We are inside a label\n");
    goto end;
    
    printf("hello world\n");
    
    goto label;
    end:
    
    printf("We are inside the end\n");
    
    return 0;
}
