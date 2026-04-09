//Number guessing  game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //number guessing game
    srand(time(NULL)); // Seed the random number generator with the current time

    int guess = 0;
    int tries = 0;
    int min = 10;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", min, max);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("Too low! Try again.\n");
        } else if (guess > answer) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d tries!\n", answer, tries);
        }
    } while (guess != answer);
}