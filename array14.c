#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int min = -1;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0) {
            if(min == -1 || a[i] < min)
                min = a[i];
        }
    }
    if(min == -1)
        printf("No positive");
    else
        printf("%d", min);
    return 0;
}
