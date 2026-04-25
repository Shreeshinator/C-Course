#include <stdio.h>

//pointers demo
int main(){
    int a = 10;
    int *ptr = &a; // ptr is a pointer to an integer, storing the address of a

    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output: Address of a
    printf("Value stored in ptr (address of a): %p\n", (void*)ptr); // Output: Address of a
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    // Modifying the value of a using the pointer
    *ptr = 20; // This changes the value of a to 20
    printf("New value of a after modification through ptr: %d\n", a); // Output: 20
    return 0;

}