#include<stdio.h>
void swap(int *x, int *y) {
    int temp=*x;
    *x = *y;
    *y=temp;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Before Swapping %d %d\n", a,b);
    swap(&a, &b);
    printf("After Swapping %d %d", a,b);
    return 0;
}

