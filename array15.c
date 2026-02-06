#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int orders[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &orders[i]);
    int pos = 0;
    for(int i = 0; i < n; i++) {
        if(orders[i] != 0) {
            orders[pos] = orders[i];
            pos++;
        }
    }
    while(pos < n) {
        orders[pos] = 0;
        pos++;
    }
    for(int i = 0; i < n; i++)
        printf("%d ", orders[i]);
    return 0;
}
