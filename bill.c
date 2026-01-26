#include <stdio.h>

int main() {
    int units;
    int bill;

    scanf("%d", &units);

    bill = units * 5;

    printf("Bill amount = Rs. %d", bill);

    return 0;
}
