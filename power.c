#include <stdio.h>

int main() {
    int base, power;
    int result = 1;

    scanf("%d %d", &base, &power);

    for(int i = 1; i <= power; i++) {
        result = result * base;
    }

    printf("%d", result);

    return 0;
}