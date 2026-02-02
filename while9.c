#include <stdio.h>
int main() {
    int fuel, n;
    scanf("%d", &fuel);
    scanf("%d", &n);
    int i = 0, use;
    int trips = 0;
    while (i < n) {
        scanf("%d", &use);
        if (fuel < use)
            break;
        fuel = fuel - use;
        trips++;
        i++;
    }
    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", fuel);
    return 0;
}