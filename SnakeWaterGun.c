#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//  0-->Snake
//  1-->Water
//  2--> Gun
int main(){
    srand(time(0));
    int Player,Computer = rand() % 3 ;
    printf(" Please Choose 0 for Snake , 1 For Water and 2 for Gun:- \n ");
    scanf("%d",&Player);
    printf("Computer choose %d \n",Computer);
    if(Player == 0 && Computer == 0){
        printf(" It's Draw..!");
    }
    else if (Player == 0 && Computer == 1)
    {
        printf("You Win ...!");
    }
    else if (Player == 0 && Computer == 2)
    {
        printf("You Lose..!");
    }
    else if (Player == 1 && Computer == 0)
    {
        printf("You Lose..!");
    }
    else if (Player == 1 && Computer == 1)
    {
        printf("It's Draw..!");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("You Win..!");
    }
    else if (Player == 2 && Computer == 0)
    {
        printf("You Win ...!");
    }
    else if (Player == 2 && Computer == 1)
    {
        printf("You Lose!");
    }
    else if (Player == 2 && Computer == 2)
    {
        printf("It's Draw..!");
    }
    else{
        printf("Something wents wrong..!");
    }
    return 0;
}