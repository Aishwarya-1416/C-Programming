#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 60)
        printf("Grade C");
    else if (marks >= 50)
        printf("Grade D");
    else
        printf("Fail");

    return 0;
}
