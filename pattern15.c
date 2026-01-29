#include <stdio.h>
int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
            printf("%c", ch++);
        ch -= 2;
        for (int j = 0; j < i; j++)
            printf("%c", ch--);
        printf("\n");
    }
    return 0;
}
