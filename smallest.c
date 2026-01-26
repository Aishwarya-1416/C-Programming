#include <stdio.h>

int main() {
    int a, b, small;
    scanf("%d %d", &a, &b);

    small = (a < b) ? a : b;

    printf("%d is smallest", small);

    return 0;
}
