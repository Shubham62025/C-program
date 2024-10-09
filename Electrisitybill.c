#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float totalAmount, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", name);
    
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        totalAmount = units * 1.5;  
    } else if (units <= 300) {
        totalAmount = 100 * 1.5 + (units - 100) * 2.0;  
    } else {
        totalAmount = 100 * 1.5 + 200 * 2.0 + (units - 300) * 3.0; 
    }

    
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15;  
    }

    totalAmount += surcharge;

    
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    
    printf("\nElectricity Bill\n");
    printf("------------------------\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount  : Rs. %.2f\n", totalAmount);

    return 0;
}

