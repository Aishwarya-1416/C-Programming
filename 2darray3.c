#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    for(int i = 0; i < m; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            int b = 1;
            for(int k = 0; k < j; k++) {
                if(a[i][j] == a[i][k]) {
                    b = 0;
                    break;
                }
            }
            if(b)
                count++;
        }
        if(count > x) {
            x = count;
            y = i;
        }
    }
    printf("%d", y);
    return 0;
}
