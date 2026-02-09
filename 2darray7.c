#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int count = 0;
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            int isMin = 1, isMax = 1;
            for(int k=0;k<C;k++)
                if(a[i][k] < a[i][j]) isMin = 0;
            for(int k=0;k<R;k++)
                if(a[k][j] > a[i][j]) isMax = 0;
            if(isMin && isMax)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}
