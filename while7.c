#include <stdio.h>
int main() {
    int capacity, n;
    scanf("%d", &capacity);
    scanf("%d", &n);
    int occupied = 0;
    int criticalCount = 0;
    int i = 0;
    while (i < n) {
        int change;
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied > capacity)
            occupied = capacity;
        if (occupied > (capacity * 0.9))
            criticalCount++;
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);
    return 0;
}
