#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand()%100)+1;
    int no_of_guesses = 0;
    //printf(" The Random Number is %d \n",randomNumber);
    int guessed_number;
    
    do{
        printf("guess the number:-");
        scanf("%d",&guessed_number);
        if (guessed_number>randomNumber)
        {
            printf("Please guess lower Number \n ");
        }
        else if(guessed_number<randomNumber){
            printf("Please guessed Higher Number\n");
        }
        else {
            printf("Congrates! \n");
        }
            no_of_guesses++;  
    } while(guessed_number!=randomNumber);
    printf("you guessed the number in %d guesses",no_of_guesses);
    return 0;
}