#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    int guess = 0;
    int randomNumber = 0;
    int numGuessesLeft = 6;

    //initialize random number generator
    srand((unsigned) time(&t));

    // get the random number, less than 51
    randomNumber = rand() % 51;

    printf("This is a guessing game. A number between 0 and 50 has been selected and you have %d tries to guess which one it is.", numGuessesLeft);

    for(numGuessesLeft; numGuessesLeft >= 0; numGuessesLeft--)
    {
        //exits loop when no more guesses are left
        if (numGuessesLeft == 0)
        {
        printf("\nYou lost the game! You didn't guess the number!\nMy number was %d.", randomNumber);
        break;
        }
        
        //Displays num guesses left and promts user to enter their guess
        printf("\nYou have %d tries left.", numGuessesLeft);
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        
        if (guess > 50 || guess < 0)
        printf("Your guess is out of bounds. You just wasted a turn!");
        else if (guess == randomNumber)
        {
        printf("You won the game! You guessed the right number!");
        break;
        }
        else if(guess < randomNumber)
        printf("Wrong! My guess is higher than that!");
        
        else if(guess > randomNumber)
        printf("Wrong! My guess is less than that!");
        
        
    }
    

    return 0;
}
