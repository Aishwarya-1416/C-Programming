#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        int prime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            count++;
    }
    printf("%d", count);
    return 0;
}
