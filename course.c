#include <stdio.h>

int main() {
    int mode;
    char category;

    scanf("%d", &mode);
    scanf(" %c", &category);

    switch (mode) {
        case 1:   // Online
            switch (category) {
                case 'R':
                    printf("₹5000");
                    break;
                case 'S':
                    printf("₹3000");
                    break;
            }
            break;

        case 2:   // Offline
            switch (category) {
                case 'R':
                    printf("₹9000");
                    break;
                case 'S':
                    printf("₹7000");
                    break;
            }
            break;
    }

    return 0;
}
