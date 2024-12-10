#include <stdio.h>
int main() {
    int matrix[2][2]; 
    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe 2x2 matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

