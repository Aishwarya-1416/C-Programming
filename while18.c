#include <stdio.h>
int main() {
    int cap, n, load, i = 0;
    int safe = 0, fail = 0;
    scanf("%d%d", &cap, &n);
    while (i < n) {
        scanf("%d", &load);
        if (load > cap) fail++;
        else safe++;
        i++;
    }
    printf("Safe Hours: %d\n", safe);
    printf("Failure Count: %d\n", fail);
    return 0;
}