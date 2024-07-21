// function is a piece of code that performs a specific task.
// a function is a set of satement which is called by another function is called function
// ADVANTAGES -> organize the code , reusability
#include<stdio.h>

int multi(int a , int b){ // formal parameter
int c;
c = a*b;
return (c);
}

int div(int a , int b){ // formal parameters
    int c;
    c= a/b;
    return (c);
}

int main(){
    int x,y;
    x=10;
    y-5;
    int z = multi(x,y); // actual parameter
    int k = div(x,y);  // actual parameter
    printf(" product is %d \n",z);
    printf( " division is %d" ,k);
    return 0;
}