#include <stdio.h>
#include <stdlib.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C], sum[R];
    for(int i=0;i<R;i++) {
        sum[i]=0;
        for(int j=0;j<C;j++) {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }
    int maxDiff = 0;
    for(int i=0;i<R;i++)
        for(int j=i+1;j<R;j++) {
            int d = abs(sum[i]-sum[j]);
            if(d > maxDiff)
                maxDiff = d;
        }
    printf("%d", maxDiff);
    return 0;
}
