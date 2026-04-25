//typedef demo
#include <stdio.h>
typedef struct {
    char name[50];
    int age;
} Person;
int main(){
    Person person = {"Shreesh", 13};
    printf("Name: %s, Age: %d\n", person.name, person.age);
    return 0;
}
