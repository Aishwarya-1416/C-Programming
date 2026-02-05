#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int count = 0;
    float avg = (float)sum/n;
    for (int i=0; i<n; i++) {
        if (a[i] > avg) {
            count++;
        }

    }
    printf("%d", count);
    return 0;

}