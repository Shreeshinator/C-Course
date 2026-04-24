#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Ternary operator to find the maximum
    printf("The maximum of %d and %d is: %d\n", a, b, max);
    return 0;
}