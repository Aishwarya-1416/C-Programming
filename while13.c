#include <stdio.h>
int main() {
    int data, n;
    scanf("%d", &data);
    scanf("%d", &n);
    int i = 0, use;
    int day = 0;
    int exhausted = 0;
    while (i < n) {
        scanf("%d", &use);
        data -= use;
        i++;
        if (data <= 0 && exhausted == 0) {
            day = i;
            exhausted = 1;
            break;
        }
    }
    if (exhausted) {
        printf("Exhausted Day: %d\n", day);
        if (data < 0)
            printf("Overused Data: %d\n", -data);
        else
            printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    }
    return 0;
}
