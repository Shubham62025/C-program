#include <stdio.h>
int main() {
    int arr1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr1) / sizeof(arr1[0]); 
    int arr2[size];
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements in the copied array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

