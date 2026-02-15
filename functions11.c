#include<stdio.h>
int countdigit(int n) {
    int count = 0;
    for (;n!=0; n=n/10) {
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countdigit(n));
    return 0;
}