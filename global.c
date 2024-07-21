//  a variable is declared that is outside the function or block is called global variable.- it must declared at the top

# include<stdio.h>

// defining a global variable
    int var1 = 10;

// definig the function 
    void func()
    {
        printf("global variable %d \n",var1);
    }

int main(){
     printf("global variable %d \n",var1);
     func(); // xcalling the function
     return 0;
}