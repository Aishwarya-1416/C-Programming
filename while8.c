#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0, val;
    int current = 0, max = 0;
    while (i < n) {
        scanf("%d", &val);
        if (val == 0) {
            current++;
            if (current > max)
                max = current;
        } else {
            current = 0;
        }
        i++;
    }
    printf("Longest Default Streak: %d\n", max);
    return 0;
}