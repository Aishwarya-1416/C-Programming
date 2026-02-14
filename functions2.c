#include <stdio.h>
int findMax(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int result = findMax(A, B);
    printf("%d", result);
    return 0;
}
