#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int status;
    int currentStreak = 0;
    int maxStreak = 0;
    while (i < n) {
        scanf("%d", &status);
        if (status == 0) {
            currentStreak++;
            if (currentStreak > maxStreak)
                maxStreak = currentStreak;
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d\n", maxStreak);
    return 0;
}
