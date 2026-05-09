//arrays of structures
#include <stdio.h>

 struct Car {
    char model[50];
    int year;
    int price;
};

int main() {
    struct Car cars[3] = {
        {"Ford Mustang", 2020, 35000},
        {"Corvette", 2019, 68000},
        {"Challenger", 2021, 29000}
    };

    for (int i = 0; i < 3; i++) {
        printf("Car %d: Model: %12s   Year: %4d    Price: $%d\n", i + 1, cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}