#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int answer = 0;
    int guess;
    const int max = 30,min = 0;
    srand(time(0));

    answer = (rand() % max - min + 1) +min;

    while(i <6 && guess != answer){
         printf("\nEnter a guess : ");
         scanf("%d", &guess);

         if(guess < answer){
            printf("\nTo low number !");
         }else if(guess > answer){
            printf("\nTo high number !");
         }else if(guess == answer){
            printf("\nCorrect !");
                printf("\n***********************************");
                printf("\nThe answer is : %d", guess);
                printf("\nYou found the answer in : %d tries", i);
                printf("\n************************************");
         }

         i++;

    }
    
    if(answer != guess){
    printf("\nNice try The correct answer was : %d", answer);
    printf("\nReplay the game !");
    }else{
        printf("\nCongratulations !");
    }





    return 0;

}