# include<stdio.h>
int main(){
    int x,y,z;
    printf(" enter a number");
    scanf("%d",&x); // & -> address operator which is used to give the adddress of x from the keyboard
    printf(" enter anather number");
    scanf("%d",&y);
    z= x+y;
    printf(" total is %d",z); // %d - format specifer specifies the value of z is 
    return 0;
}