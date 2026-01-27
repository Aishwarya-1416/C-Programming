#include <stdio.h>

int main() {
    int plan, pay;
    int amount = 0;

    scanf("%d", &plan);
    scanf("%d", &pay);

    switch (plan) {
        case 1:
            amount = 199;

            switch (pay) {
                case 11:
                case 12:
                    amount = amount - 20;
                    break;
                case 13:
                    break;
            }
            break;

        case 2:
            amount = 399;

            switch (pay) {
                case 11:
                case 12:
                    amount = amount - 20;
                    break;
                case 13:
                    break;
            }
            break;
    }

    printf("Pay ₹%d", amount);

    return 0;
}