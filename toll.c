#include <stdio.h>

int main() {
    int vehicleType, trips;
    int amount = 0;

    scanf("%d", &vehicleType);
    scanf("%d", &trips);

    switch(vehicleType) {
        case 1:   // Car
            if (trips == 1)
                amount = 100;
            else
                amount = 800;
            break;

        case 2:   // Truck
            amount = trips * 240;
            break;
    }

    printf("₹%d", amount);

    return 0;
}
