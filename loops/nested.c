//  THE STATEMENT BLOCK OF A LOOP LIES COMPLETELY INSIDE THE BLOCK OF ANOTHER LOOP.
#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=6;i++){ // this loop is responsible for print rows

        for(j=1;j<=i;j++){ // this loop is responsible to print the column of each loop

            printf("*");
        }
        printf("\n");
    }
    return 0;
}