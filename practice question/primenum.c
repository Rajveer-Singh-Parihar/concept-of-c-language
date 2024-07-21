#include<stdio.h> // number divides itself than it called a prime number
int main(){
int n,i,count=0;
printf(" Enter any number "); // n=5
scanf("%d",&n);
for(i=1;i<=n;i++){

if(n%i==0){ // 5%1==0 5%2 5%3 5%4 5%5
count++; // 1 / 1 = 1+`1=2
}
}
if(count==2)
    printf("prime number");
    else
    printf("not prime number");
    
    return 0;
}

