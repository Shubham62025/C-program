#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int searchElement, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at index %d.\n", searchElement, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d is not present in the array.\n", searchElement);
    }
    return 0;
}

