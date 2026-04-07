//generate a random number with help of time lib and rand function
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int min = 1;
    int max = 100;

    int randomNumber = rand() % max + min; // Generate a random number between 1 and 100
    printf("Generated random number: %d\n", randomNumber);

    return 0;
}