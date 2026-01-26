#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 11 == 0)
        printf("Divisible by 11");
    else
        printf("Not divisible by 11");

    return 0;
}
