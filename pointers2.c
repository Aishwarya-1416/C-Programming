#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    int max = *ptr;
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("%d", max);
    return 0;
}