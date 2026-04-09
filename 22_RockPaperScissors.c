//Rock Paper Scissors Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice() {
    return rand() % 3; // 0: Rock, 1: Paper, 2: Scissors
}
 
int getUserChoice() {
    int choice;
    
    while(1){
        printf("Enter your choice (0: Rock, 1: Paper, 2: Scissors): ");
        scanf("%d", &choice);
        
        if (choice >= 0 && choice <= 2) {
            return choice;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int computerChoice = getComputerChoice();
    int userChoice = getUserChoice();

   

    if (userChoice == 0) {
        printf("You chose Rock.\n");
    } else if (userChoice == 1) {
        printf("You chose Paper.\n");
    } else {
        printf("You chose Scissors.\n");
    }

     if (computerChoice == 0) {
        printf("Computer chose Rock.\n");
    } else if (computerChoice == 1) {
        printf("Computer chose Paper.\n");
    } else {
        printf("Computer chose Scissors.\n");
    }

    determineWinner(userChoice, computerChoice);

    return 0;
}