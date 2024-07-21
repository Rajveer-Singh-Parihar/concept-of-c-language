// skip at particular condition and start with next iteration of loop
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==5)
        continue;
        printf("%d \n",i);
    }
    return 0;
}