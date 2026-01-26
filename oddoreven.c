#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}
