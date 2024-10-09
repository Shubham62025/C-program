#include <stdio.h>

int main() {
    int math, phy, chem, total, math_phy_total;

    
    printf("Enter marks in Math: ");
    scanf("%d", &math);
    
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);

    
    total = math + phy + chem;
    math_phy_total = math + phy;

    
    if (math >= 65 && phy >= 55 && chem >= 50 && total >= 180 && math_phy_total >= 140) {
        printf("The student is eligible for admission.\n");
    } else {
        printf("The student is not eligible for admission.\n");
    }

    return 0;
}

