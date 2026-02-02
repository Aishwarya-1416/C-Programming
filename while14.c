#include <stdio.h>
int main() {
    int cash, n;
    scanf("%d", &cash);
    scanf("%d", &n);
    int i = 0, w;
    int success = 0;
    while (i < n) {
        scanf("%d", &w);
        if (cash < w)
            break;
        cash -= w;
        success++;
        i++;
    }
    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", cash);
    return 0;
}
