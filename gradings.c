#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    printf("Grade ");

    switch (marks / 10) {

        case 9:
            printf("A");
            break;

        case 8:
            printf("B");
            break;

        case 7:
            printf("C");
            break;

        case 6:
            printf("D");
            break;

        case 5:
            printf("E");
            break;

        case 4:
            if (marks >= 35)
                printf("Supplementary");
            else
                printf("Fail");
            break;

        default:
            printf("Fail");
    }

    return 0;
}