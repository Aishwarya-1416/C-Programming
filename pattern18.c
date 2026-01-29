#include <stdio.h>
int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        char ch = 'A' + i - 1;
        for (int j = i; j <= n; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
