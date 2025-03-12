
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// int checkUserInput();
// int restart(int score, char userName[50]){
    
    
//     return 0;
// }

//global variable to be access at all time, the value remaind
char userName[50]; 

int checkUserInput(){
    int counter = 0;
    int score =0;
    char startGameCommand;
    

//the main loop for the game
    while(counter < 5){
        printf("Press 1 to Start: ");
        scanf(" %c", &startGameCommand);
        if(startGameCommand == '1'){
            printf("Game Start!!! \n");
            while(counter <5){
                int randValue = rand() % 20 + 1;
                counter++;
                int userInput;
                printf("Guess the Lucky Number: ");
                scanf("%d", &userInput);
                if(userInput == randValue){
                    printf("CORRECT!!!!\n");
                    score+=2;
                }else if(userInput > randValue){
                    printf("Guess too High\n");
                }else if(userInput < randValue){
                    printf("Guess too Low\n");
                }
            }
        }

        if(counter ==5){
            printf("Sorry, You Have Reach Your Guesing Limit\n");
            printf("Score: %d\n", score);
        }
    }

    //restart the game statement
    int reStart;
    printf("Play Again enter: 1 or 2 to Cancle: ");
    scanf("%d", &reStart);
    while(reStart == 1){
        if(reStart == 1){
            return checkUserInput();
        }else{
            printf("Nice to See Your Again %s\n", userName);
            printf("Score: %d\n", score);
            break;
            
        }
    };


    return 0;
    
}

//information need to be called before the game start
int main(){
    printf("Welcome to the Guesing Game\n");
    printf("Please Enter Your Name: ");
    fgets(userName, sizeof(userName), stdin);
    printf("Game Rule: You Only allow to Guess 5 time.\n");
    printf("Guess in The Range from 1 to 20\n");
    printf("=====================<><><><>===============================>\n");
    checkUserInput();
}