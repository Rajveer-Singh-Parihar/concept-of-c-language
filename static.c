// static variable is declared with the static keyword  called static variab;e  . - update value is given all the time(new value).
#include<stdio.h>
void main()
{
    fun();// 11 21 
    fun(); // 11 22 
}
void fun(){
    int a =10;
    static int b=20;
    a++;
    b++;
    printf("%d %d",a,b);
}