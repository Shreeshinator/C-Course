//structs demo
#include <stdio.h>
typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    Student student1 = {"Alice", 20, 3.5};
    printf("Name: %s,\n Age: %2d,\n GPA: %.2f\n", student1.name, student1.age, student1.gpa);// Output will be: Name: Alice, Age: 20, GPA: 3.50
    return 0;
}