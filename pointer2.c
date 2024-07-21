// POINTER -> A POINTER IS VARIABLE THAT STORES THE MEMORY ADDRESS OF OTHER VARIABLE .DECLARTION(*PTR)
//PINTERS ARE POWERFUL THAT ARE UISED IN DYNAMIC MEMMORY ALLOCATION ,ARRAYS ANF FUNCTION .
// a VARIABLE THAT STORES THE MEMORY ADDRESS OF ANOTHER VARIABLE .
// * -> talking about the actual  address  - > eg :- 1000
// & -> value of variable :- int a =10; <- value 

# include<stdio.h>
int main()
{
    int num=10;
    int *p = &num;
    

    printf(" value of num: %d \n",*p); // 10

}


