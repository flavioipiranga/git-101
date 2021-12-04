#include<stdio.h>

#include "example_header_function_sum.h"
#include "example_header_function_mult.h"

int main (void)
{
    int result = 0;

    printf("Welcome to GIT-101 repository!\n");
    printf("Have fun learning!\n");

    result = MULT_OPERATION(2,3);
    printf("Doing some multiplication: %d\n", result);

    //result = SUM_OPERATION (2,3);
    //printf("Doing some sum: %d\n", result);
    
    printf("Pull alteration test.\n")
    

    return 0;
}
