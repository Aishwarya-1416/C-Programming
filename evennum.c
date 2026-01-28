#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (; n > 0; n = n / 10) {
        int digit = n % 10;

        if (digit % 2 == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
