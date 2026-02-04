#include <stdio.h>
int main() {
    int n, i, max;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[n-1];
    printf("%d ", max);
    for(i = n-2; i >= 0; i--) {
        if(a[i] > max) {
            max = a[i];
            printf("%d ", max);
        }
    }
    return 0;
}
