#include <stdio.h>

int main()
{
    int orderAmount, speedType;

    scanf("%d", &orderAmount);
    scanf("%d", &speedType);

    switch (speedType)
    {
        case 1:
            printf("Delivery ₹50");
            break;

        case 2:
            if (orderAmount < 1000)
                printf("Delivery ₹100");
            else
                printf("Delivery Free");
            break;

        default:
            printf("Invalid speed type");
    }

    return 0;
}