#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0, hrs;
    int total = 0, burnout = 0;
    while (i < n) {
        scanf("%d", &hrs);
        total += hrs;
        if (hrs > 4)
            burnout++;
        i++;
    }
    printf("Total Overtime: %d\n", total);
    printf("Burnout Days: %d\n", burnout);
    return 0;
}
