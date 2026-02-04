#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int x;
    scanf("%d", &x);
    for (int j = 0; j < size; j++) {
        if (arr[j] == x) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}