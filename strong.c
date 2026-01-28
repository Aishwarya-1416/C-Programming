#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0;
    scanf("%d", &n);
    temp = n;
    for(; temp > 0; temp /= 10) {
        digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
    }
    if(sum == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
