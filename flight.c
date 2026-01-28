#include <stdio.h>

int main() {
    int flightClass, weight, charge = 0;

    scanf("%d", &flightClass);
    scanf("%d", &weight);

    switch (flightClass) {
        case 1:  
            charge = weight * 300;
            printf("Extra Baggage Charge ₹%d", charge);
            break;

        case 2:   
            if (weight <= 3)
                printf("Free");
            else {
                charge = (weight - 3) * 300;
                printf("Extra Baggage Charge ₹%d", charge);
            }
            break;
    }

    return 0;
}
