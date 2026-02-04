#include <stdio.h>
int main() {
    int n, a, i = 0;
    int high = 0, streak = 0, fraud = -1;
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &a);
        if (a >= 50000) {
            high++;
            streak++;
            if (streak == 3 && fraud == -1)
                fraud = i + 1;
        } else streak = 0;
        i++;
    }

    if (fraud == -1)
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    else
        printf("Fraud Triggered At Attempt: %d\n", fraud);

    printf("High-Value Transactions: %d\n", high);
    return 0;
}
