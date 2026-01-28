#include <stdio.h>

int main() {
    int planType;
    float dataUsed;

    scanf("%d", &planType);
    scanf("%f", &dataUsed);

    switch(planType) {
        case 1:
            if (dataUsed <= 1.0)
                printf("Normal Speed");
            else
                printf("Speed Reduced");
            break;

        case 2:
            if (dataUsed <= 2.0)
                printf("Normal Speed");
            else
                printf("Extra Charges Applied");
            break;

        default:
            printf("Extra Charges Applied");
    }

    return 0;
}
