#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int max1=a[0][0];
    int max2=-1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] > max1) {
                max2 = max1;
                max1 = a[i][j];
            }
            else if (a[i][j] < max1 && a[i][j] > max2) {
                max2 = a[i][j];
            }
        }
    }
    printf("%d", max2);
    return 0;
}