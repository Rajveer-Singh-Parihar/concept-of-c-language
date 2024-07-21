#include<stdio.h>
int main(){
    int e,f;
    e=1;
    f=1;
    while(e<=5){
        f=e*f;
        printf("%d \n",f); // output  - 120 - FIBONACCI SERIES
        e++;
    }
    return 0;
}