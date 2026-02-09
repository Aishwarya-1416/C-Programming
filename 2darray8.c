#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int maxSum = INT_MIN;
    for(int i=0;i<R-1;i++)
        for(int j=0;j<C-1;j++) {
            int s = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if(s > maxSum)
                maxSum = s;
        }
    printf("%d", maxSum);
    return 0;
}
