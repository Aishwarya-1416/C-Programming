#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int maxLen = 1, curLen = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i-1])
            curLen++;
        else
            curLen = 1;

        if(curLen > maxLen)
            maxLen = curLen;
    }
    printf("%d", maxLen);
    return 0;
}
