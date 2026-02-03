#include <stdio.h>
int main() {
    int n, v, i = 0;
    int unsafe = 0, streak = 0, breakAt = -1;
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &v);
        if (v > 70) {
            unsafe++;
            streak++;
            if (streak == 3 && breakAt == -1)
                breakAt = i + 1;
        } else streak = 0;
        i++;
    }

    if (breakAt == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakAt);

    printf("Unsafe Readings: %d\n", unsafe);
    return 0;
}
