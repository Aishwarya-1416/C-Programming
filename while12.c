#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0, power;
    int max = 0, surge = 0;
    while (i < n) {
        scanf("%d", &power);
        if (power > max)
            max = power;
        if (power > 5)
            surge++;
        i++;
    }
    printf("Max Usage: %d\n", max);
    printf("Surge Hours: %d\n", surge);
    return 0;
}
