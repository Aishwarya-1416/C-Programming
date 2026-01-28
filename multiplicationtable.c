#include <stdio.h>
int main() {
    int n;
    int product = 1;
    scanf("%d", &n);
    for (int i=1; i <= 10; i++) {
        product = n*i;
        printf("%d ", product);
    }

    return 0;
}