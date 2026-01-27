#include <stdio.h>

int main() {
    int classType, age;
    float fare;

    scanf("%d", &classType);
    scanf("%d", &age);

    switch (classType) {
        case 1:
            fare = 300;

            if (age < 12) {
                fare = fare * 0.5;
            } else if (age >= 60) {
                fare = fare * 0.67;
            }
            break;

        case 2:   // AC
            fare = 1000;

            if (age < 12) {
                fare = fare * 0.5;
            }
            break;

        default:
            printf("Invalid Class");
            return 0;
    }

    printf("Fare ₹%.0f", fare);

    return 0;
}
