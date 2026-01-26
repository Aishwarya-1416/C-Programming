#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180)
        printf("Valid triangle");
    else
        printf("Not a valid triangle");

    return 0;
}
