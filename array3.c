#include <stdio.h>
int main() {
    int n, i, sorted = 1;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            sorted = 0;
            break;
        }
    }
    if(sorted)
        printf("Yes");
    else
        printf("No");
    return 0;
}
