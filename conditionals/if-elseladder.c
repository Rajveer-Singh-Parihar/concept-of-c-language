#include<stdio.h>
int main(){
    int x;
    printf(" enter a number");
    scanf("%d",&x);
    if(x<50){
        printf(" less than fifty \n");
    }
    else{
        if(x>50){
            printf(" grater thanm fifty \n");
        }
        else{
            printf(" equal to fifty");
        }
    }
    return 0;
}