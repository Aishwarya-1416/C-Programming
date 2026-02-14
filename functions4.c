#include <stdio.h>
float calculateArea(int r) {
    float area;
    area = 3.14 * r * r;
    return area;
}
int main() {
    int R;
    scanf("%d", &R);
    float result = calculateArea(R);
    printf("%.2f", result);
    return 0;
}
