#include <stdio.h>

int main() {
    int n, term = 9, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum+term; 
        printf("%d ", term); 
        term = term * 10 + 9;
    }

    printf("\nSum of the series: %d\n", sum);

    return 0;
}
