#include <stdio.h>
int main() {
    int n, i = 1, prev, curr;
    int drops = 0, streak = 0, crashDay = -1;
    scanf("%d", &n);
    scanf("%d", &prev);
    while (i < n) {
        scanf("%d", &curr);
        if (curr < prev) {
            drops++;
            streak++;
            if (streak == 3 && crashDay == -1)
                crashDay = i + 1;
        } else streak = 0;
        prev = curr;
        i++;
    }
    if (crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);
    printf("Total Drops: %d\n", drops);
    return 0;
}