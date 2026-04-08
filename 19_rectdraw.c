//Prompt a user to insert a symbol and length and width and then draw a rectangle using that symbol. The rectangle should be specified characters wide and specified characters tall.

#include <stdio.h>
int main() {
    char symbol;
    int width, height;

    printf("Enter a symbol to draw the rectangle: ");
    scanf(" %c", &symbol);
    clearBuffer(); // Clear the input buffer to avoid issues with subsequent inputs

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    clearBuffer(); // Clear the input buffer to avoid issues with subsequent inputs

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    clearBuffer(); // Clear the input buffer to avoid issues with subsequent inputs

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
}