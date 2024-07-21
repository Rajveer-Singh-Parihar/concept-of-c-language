// recursive function - a function which called itself is called recursive function. And this technique is known as recursion.
// a function defined in c can call itself.

#include<stdio.h>
int factorial( int n){
    if(n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int a = 6;
    printf(" the factorial of %d is %d ",factorial(a));
    return 0;
}