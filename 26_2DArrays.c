#include <stdio.h>

int main(){
    int numbers [3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Element at row %d, column %d: %d\n", i, j, numbers[i][j]);
        }
    }

    return 0;

}