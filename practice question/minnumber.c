#include<stdio.h>
int main(void){
    int myarray[] = { 5,6,7,3,4,7,8,96,66};
    int min;
    min = myarray[0];
    for(int i =0 ; i<9; i++)
    {
        if(myarray[i]<min) min = myarray[i];
    }
    printf(" MINIMUM %d \n",min);
    return 0;
}