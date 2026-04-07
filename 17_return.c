#include <stdio.h>

double cube(double num) {
    double result = num * num * num;
    printf("The cube of %lf is %lf\n", num, result);
    return result;

}

double square(double num) {
    double result = num * num;
    printf("The square of %lf is %lf\n", num, result);
    return result;

}

int main(){

    cube(2.0);
    cube(3.0);
    square(4.0);

    return 0;
}