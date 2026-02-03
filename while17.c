#include <stdio.h>
int main() {
    int bal, n, p, i = 0, count = 0;
    scanf("%d%d", &bal, &n);
    while (i < n) {
        scanf("%d", &p);
        if (bal < p) break;
        bal -= p;
        count++;
        i++;
    }
    printf("Successful Purchases: %d\n", count);
    printf("Final Balance: %d\n", bal);
    return 0;
}
