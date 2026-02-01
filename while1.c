#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    int violations = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;
    while (i < n) {
        if (arr[i] > 70) {
            violations++;
            currentStreak++;
            if (currentStreak > maxStreak)
                maxStreak = currentStreak;
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", maxStreak);
    return 0;
}
