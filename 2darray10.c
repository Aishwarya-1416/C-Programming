#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxRow = 0;
    int maxProduct = 1;
    for(int j = 0; j < C; j++) {
        maxProduct *= a[0][j];
    }
    for(int i = 1; i < R; i++) {
        int product = 1;
        for(int j = 0; j < C; j++) {
            product *= a[i][j];
        }
        if(product > maxProduct) {
            maxProduct = product;
            maxRow = i;
        }
    }
    printf("%d", maxRow);
    return 0;
}
