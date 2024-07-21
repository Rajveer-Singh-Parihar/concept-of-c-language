// POINTER -> POINTER IS SPECIAL VARIABLE THAT IS CAPABLE OF STORING SOME ADDRESS.(we can say that pointer points to  anther variable)
// IT POINTS TO A MEMORY LOCATION WHERE THE FIRST BYTE IS STORED.

// * -> DE - REFERENCING - pointing to actual value 
// & -> REFERENCING -  address of operator - address at memory

#include<stdio.h>
int main()
{
    int a =10;
    int *ptr; // pointer variable

    ptr = &a;// address of a
    printf("%d \n",ptr);
    printf("%d \n",*ptr); // actual value at address which is 10
    return 0;

}