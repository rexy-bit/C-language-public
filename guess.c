#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 10;
    const int MAX = 100;
    int guess;
    int guesses ;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess :");
        scanf("%d", &guess);

        if(answer < guess)
          {
            printf("Too high number!\n");
          }else if(answer > guess)
          {
            printf("Too low number!\n");
          }else{
            printf("Correct!\n");
          }
          guesses++;
    }while(guess != answer);

    printf("**********************");
    printf("answer : %d\n", answer);
    printf("guesses : %d\n", guesses);
    printf("**********************");


     return 0;
}