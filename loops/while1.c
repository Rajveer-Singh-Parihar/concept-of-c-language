#include<stdio.h>
int main(){
    int x,y;
    x=1;  // x= 1 - 1 ,2 ,3,4,5
    y=1; // y=1 - 1,2 ,4 ,7,11 - output
    while(x<=5){
        printf("%d \n ",y); // 
        y=y+x; 
        x++;
    }
    return 0;
}