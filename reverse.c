#include <stdio.h>
int main() {
    int n;
    int reverse = 0;
    scanf("%d", &n);
    for (; n!=0; n/=10) {
        reverse = reverse*10+(n%10);
    }
    printf("%d\n", reverse);
    return 0;
}