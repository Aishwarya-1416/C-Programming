#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0, delay;
    int totalDelay = 0, delayedDays = 0;
    while (i < n) {
        scanf("%d", &delay);
        totalDelay += delay;
        if (delay > 2)
            delayedDays++;
        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);
    return 0;
}