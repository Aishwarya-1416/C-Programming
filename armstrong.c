#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, digit, sum = 0, count = 0;
    scanf("%d", &n);
    temp = n;
    for(int t = n; t > 0; t /= 10)
        count++;
    for(; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += pow(digit, count);
    }
    if(sum == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
