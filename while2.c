#include <stdio.h>
int main() {
    int n;
    int balance;
    int lowDays = 0;
    scanf("%d", &n);
    scanf("%d", &balance);
    int i = 0;
    while (i < n) {
        int transaction;
        scanf("%d", &transaction);

        balance = balance + transaction;

        if (balance < 2000) {
            lowDays++;
        }
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowDays);
    return 0;
}
