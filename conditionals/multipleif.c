# include<stdio.h>
int main(){
    int x ;
    printf(" enter a number ");
    scanf("%d",&x);
    if(x<50){
        printf(" less than fifty \n");
    }
    if(x>50){
        printf(" greater than fifty \n");
    }
    if(x==50){
        printf(" equal to fifty"); // control saree if pe jayeega fir print hoga
    }
    return 0;
}