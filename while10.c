#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0, hours;
    int inactive = 0;
    while (i < n) {
        scanf("%d", &hours);
        if (hours == 0)
            inactive++;
        i++;
    }
    printf("Inactive Weeks: %d\n", inactive);
    if (inactive >= 3)
        printf("Risk Status: High\n");
    else
        printf("Risk Status: Low\n");
    return 0;
}