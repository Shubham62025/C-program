#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int a[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            a[even++] = arr[i];
        }
    }
    printf("Even numbers in the array are: ");
    for (int i = 0; i < even; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

