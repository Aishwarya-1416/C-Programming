#include <stdio.h>
int main() {
    int n, v, i = 0;
    int cong = 0, cur = 0, max = 0;
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &v);
        if (v > 20) {
            cong++;
            cur++;
            if (cur > max) max = cur;
        } else cur = 0;
        i++;
    }

    printf("Congestion Minutes: %d\n", cong);
    printf("Longest Congestion Streak: %d\n", max);
    return 0;
}
