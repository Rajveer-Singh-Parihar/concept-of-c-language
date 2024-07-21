// array is variable which can store more than one value of same datatype.
// array cant contain di-similar type of data.
// the base index of array start withs zero.
// the size of array is always 0 to n-1.

// ONE DIMENSIONAL ARRAY
#include<stdio.h>
int main()
{
    int a[5],i;
    printf(" enter the elemnts in the array :");

    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf(" array elements are : ");

    for(i=0;i<=4;i++){
        printf("%d \n",a[i]);
    }
}