#include <stdio.h>
void printTable(int num, int multiplier) {
    if (multiplier > 10)
        return; 
    printf("%d x %d = %d\n", num, multiplier, num * multiplier);
    printTable(num, multiplier + 1);
}
int main() {
    int num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    printTable(num, 1);
    return 0;
}
