#include <stdio.h>
int main() {
    int fuel, n, burn, i = 0;
    scanf("%d%d", &fuel, &n);

    while (i < n) {
        scanf("%d", &burn);
        fuel -= burn;
        if (fuel < 0) {
            printf("Emergency Stage: %d\n", i + 1);
            printf("Fuel Wasted: %d\n", -fuel);
            return 0;
        }
        i++;
    }

    printf("Emergency Stage: Not Occurred\n");
    printf("Fuel Wasted: 0\n");
    return 0;
}
