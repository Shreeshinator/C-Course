//enums demo
#include <stdio.h>
typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int main() {
    Day myDay = TUESDAY;
    printf("The day is: %d\n", myDay); // Output will be 2 since TUESDAY is the third value in the enum
    return 0;
}