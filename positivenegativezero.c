#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num > 0)
        printf("Positive number");
    else if (num < 0)
        printf("Negative number");
    else
        printf("Zero");

    return 0;
}
