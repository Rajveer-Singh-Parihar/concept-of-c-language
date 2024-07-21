#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++) // rows print -+> i=1 - 2 -
    {
        for(j=1;j<=i;j++) // column -> j=1 - 1<=2 , 2<=2 repeat 
        { 
        printf("*");
        }
        printf("\n");
    }
    return 0;
}