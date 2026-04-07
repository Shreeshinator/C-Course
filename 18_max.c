#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = max(num1, num2);
    printf("The maximum of %d and %d is %d\n", num1, num2, result);

    return 0;
}