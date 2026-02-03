#include <stdio.h>
int main() {
    int maxW, n, w;
    scanf("%d%d", &maxW, &n);
    int sum = 0, people = 0, overload = 0, i = 0;
    while (i < n) {
        scanf("%d", &w);
        if (sum + w > maxW) {
            overload = 1;
            break;
        }
        sum += w;
        people++;
        i++;
    }
    printf("People Entered: %d\n", people);
    printf("Overload Status: %s\n", overload ? "Yes" : "No");
    return 0;
}
