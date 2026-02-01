#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int value;
    int success = 0, cancelled = 0;
    while (i < n) {
        scanf("%d", &value);
        if (value == 1)
            success++;
        else
            cancelled++;
        i++;
    }
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancelled);
    if (cancelled > success)
        printf("Status: Risk\n");
    else
        printf("Status: Safe\n");
    return 0;
}
