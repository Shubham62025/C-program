#include <stdio.h>

int main() {
    int n, count_even = 0, count_odd = 0;

    printf("Enter the number of even and odd numbers to display: ");
    scanf("%d", &n);

    printf("First %d even numbers are:\n", n);
    for (int i = 0; count_even < n; i += 2) {
        printf("%d ", i);
        count_even++;
    }

    printf("\nFirst %d odd numbers are:\n", n);
    for (int i = 1; count_odd < n; i += 2) {
        printf("%d ", i);
        count_odd++;
    }

    printf("\n");
    return 0;
}
