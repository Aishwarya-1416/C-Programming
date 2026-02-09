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
        int even = 0, odd = 0;
        for(int j=0;j<C;j++) {
            if(a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == odd)
            count++;
    }
    printf("%d", count);
    return 0;
}
