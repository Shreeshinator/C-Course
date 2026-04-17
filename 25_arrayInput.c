#include <stdio.h>

int main(){

    int numbers[5] = {0}; // Initialize all elements to 0
    printf("Enter 5 integers:\n");

    for (int i = 0; i < 5; i++){
        printf("Element %d: ", i);
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while(getchar() != '\n'); // Clear the input buffer
            i--; // Decrement i to retry the current index
        }
    }

    printf("--------------------------------------------------------------------------------------------------------\n");

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++){
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    return 0;
}