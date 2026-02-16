#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], sum = 0;
    int *ptr;
    for(ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }
    for(ptr = arr; ptr < arr + n; ptr++) {
        sum += *ptr;
    }
    printf("%d", sum);
    return 0;
}
