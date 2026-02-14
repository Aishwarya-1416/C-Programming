#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    for( ; n > 0; n = n / 10) {
        sum = sum + (n % 10);
    }
    return sum;
}
int main() {
    int N;
    scanf("%d", &N);
    int result = sumOfDigits(N);
    printf("%d", result);
    return 0;
}
