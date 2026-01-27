#include <stdio.h>
int main() {
    int account, years;
    scanf("%d %d", &account,&years);
    switch (account) {
        case 1:
            printf("Interest 4%%");
            break;
        case 2:
            if (years > 3)
                printf("Interest 7%%");
            else
                printf("Interest 5%%");
            break;
        default:
            printf("Invalid account ");
    }
    return 0;
}