#include <stdio.h>
int main() {
    int totalData, n;
    scanf("%d", &totalData);
    scanf("%d", &n);
    int i = 0;
    int daysUsed = 0;
    while (i < n && totalData > 0) {
        int usage;
        scanf("%d", &usage);

        totalData = totalData - usage;
        daysUsed++;

        i++;
    }
    if (totalData < 0)
        totalData = 0;
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}
