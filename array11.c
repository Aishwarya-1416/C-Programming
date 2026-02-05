#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int total = 0;
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    int left = 0;
    for (int i = 0; i < size; i++) {
        int right = total - left - arr[i];
        if (left == right) {
            printf("%d", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1");
    return 0;
}