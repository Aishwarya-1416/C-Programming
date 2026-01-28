#include <stdio.h>

int main() {
    int category, age;

    scanf("%d", &category);
    scanf("%d", &age);

    switch (category) {
        case 1:   // Two Wheeler
            if (age <= 5)
                printf("₹1500");
            else
                printf("₹2500");
            break;

        case 2:   // Four Wheeler
            if (age <= 5)
                printf("₹4000");
            else
                printf("₹6000");
            break;
    }

    return 0;
}
