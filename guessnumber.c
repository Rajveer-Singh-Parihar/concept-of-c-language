#include<stdio.h>
#include<stdlib.h>
#include<time.h> // shows as time 

int main(){

    // random number genrator

    srand(time(0));

    // genrate random number between 1-100
    int randomNumber = (rand() %100)+1;
    int no_ofguess = 0;
    int guessed;

    do{
        printf(" GUESS THE NUMBER");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("Lower Number Please \n");
        }
        else{
            printf(" Higher Number Please \n");
        }

        no_ofguess++;
        
    }while(guessed != randomNumber);

    printf(" you guessed the number in %d guesses",no_ofguess);
    return 0;
}