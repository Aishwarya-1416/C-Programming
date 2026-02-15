#include<stdio.h>
int sum(int n) {
    int i, sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}