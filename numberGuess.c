#include <stdlib.h>
#include <stdio.h>
//time library includes random
#include <time.h> 

int main(int argc, char const *argv[])
{
    //create time variable to hold random numebr
    time_t t;
    //initialise the random number seed
    srand((unsigned) time(&t));
    //generate the random number which will be from 0 - 20 (upper is not inclusive)
    int numberToGuess = rand() %21;

    int guess;
    int remainingGuesses = 5;
    
    printf("This is a guessing game\n");
    printf("A random number between 0 and 20 has been generated\n");
    printf("You get 5 guesses\n");
    printf("Let's begin!\n");
    
    for(int i = 0; i <4; i++){
        printf("--------\n");
    }

    while ( remainingGuesses > 0){
        printf("You have %d guesses remaining\n", remainingGuesses);
        printf("Please enter your guess\n");
        scanf("%d", &guess);

        if ( guess < numberToGuess ){
            printf("Sorry, %d is less than the number.\n", guess);
        } else if (guess > numberToGuess){
            printf("Sorry, %d is greater than the number.\n", guess);
        } else{
            printf("Congratulations! You guessed it!\n");
            break;
        }

        remainingGuesses--;
    }

    if (remainingGuesses == 0){
    printf("\nSorry, you are out of guesses.\n");
    }

    printf("Re-run the file to play again\n");

    return 0;
}
