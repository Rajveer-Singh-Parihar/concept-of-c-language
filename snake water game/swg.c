#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int player ,computer = rand()%3 ;
    /*
     0 --> SNAKE 
     1--> WATER
     2--> GUN
    */
   printf("Choose 0 for Snake. 1 for water. 2 for gun \n");
   scanf("%d",&player);
   printf("%d",computer);

   if(player == 0 && computer == 0){
         printf(" IT,S A DRAW!!!");
   }
   else if(player == 0 && computer == 1){
    printf("PLAYER WINS \n");
   }
   else if(player == 0 && computer == 2){
    printf(" player loose");
   }
   else if(player == 1 && computer == 0){
    printf("you loose");
   }

  else if(player == 1 && computer == 1){
    printf(" IT,S A DRAW!!!");
   }

 else if(player == 1 && computer == 2){
    printf(" you win");
   }

else if(player == 2 && computer == 0){
    printf("YOU WIN");
   }
   else if(player == 2 && computer == 1){
    printf("you loose");
   }

else if(player == 2 && computer == 2){
    printf(" IT,S A DRAW!!!");
   }
   else
   {
    printf(" SOMETHING WENT WRONG");
   }
    return 0;
}