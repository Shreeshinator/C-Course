//enums demo
#include <stdio.h>
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main() {
    enum Day myDay = TUESDAY;
    printf("The day is: %d\n", myDay); // Output will be 2 since TUESDAY is the third value in the enum
    return 0;
}