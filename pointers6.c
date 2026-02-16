#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], *start, *end, i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(start = arr, end = arr + n - 1; start < end; start++, end--) {
        int temp = *start;
        *start = *end;
        *end = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
