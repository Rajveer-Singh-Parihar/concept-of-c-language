#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++) // rows print -+> i=1 - 2 -
    {
        for(j=5;j>=i;j--) // column -> j=1 - 5<=4 , 5<=4 repeat 
        { 
        printf("*");
        }
        printf("\n");
    }
    return 0;
}