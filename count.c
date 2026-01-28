#include <stdio.h>
int main() {
    int n;
    int count= 0;
    scanf("%d", &n);
    for (count = 1;n/10!=0;n/=10) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}