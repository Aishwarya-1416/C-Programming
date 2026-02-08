#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=i+1;j<n;j++) {
            int b = 0;
            for (int x=0;x<m;x++) {
                for (int y=0;y<n;y++) {
                    if (a[i][j]==a[x][y]) {
                        b = a[i][j];
                        break;
                    }
                }
                if (b!=-1)
                    break;
            }
            printf("%d ", b);
            return 0;
        }
    }

}