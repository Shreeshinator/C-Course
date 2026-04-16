#include <stdio.h>

void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

float deposit(float balance, float amount) {
    if (amount > 0) {
        balance += amount;
        printf("You have deposited: $%.2f\n", amount);
        printf("Your new balance is: $%.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a positive number.\n");
    }
    return balance;
}

float withdraw(float balance, float amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("You have withdrawn: $%.2f\n", amount);
        printf("Your new balance is: $%.2f\n", balance);
    } else if (amount > balance) {
        printf("Insufficient funds. Your current balance is: $%.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a positive number.\n");
    }
    return balance;
}

int main() {
    float balance = 1000.0  ; // Initial balance
    int choice;
    float amount;

    do{
        printf("\n**WELCOME TO DA BANK**\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
            while(getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n');
                    continue;
                }
                balance = deposit(balance, amount);
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                if (scanf("%f", &amount) != 1) {
                    printf("Invalid input.\n");
                    while(getchar() != '\n');
                    continue;
                }
                balance = withdraw(balance, amount);
                break;
            case 4:
                printf("Thank you for using the Banking System. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}