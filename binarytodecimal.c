#include <stdio.h>
int main() {
    int n, base = 1, decimal = 0;
    scanf("%d", &n);
    for(; n > 0; n /= 10) {
        int rem = n % 10;
        decimal += rem * base;
        base *= 2;
    }
    printf("%d", decimal);
    return 0;
}
