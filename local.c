// a variable is declared inside the function is called local variable .
#include<stdio.h>
void fun(){
    // local variable inside the fun function
    int a =100;
    printf(" printing inside function %d", a);
}
int main()
{
    // local variable for main function
    int a = 10;
    printf(" printing inside the main fuction %d",a);
    fun();
    return 0;
}
// if print outside so  we cant access because it is local variable.