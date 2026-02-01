#include <stdio.h>
int main() {
    int maxWeight, n;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    int i = 0;
    int weight;
    int currentWeight = 0;
    int passengers = 0;
    int overload = 0;
    while (i < n) {
        scanf("%d", &weight);
        if (currentWeight + weight > maxWeight) {
            overload = 1;
            break;
        }
        currentWeight = currentWeight + weight;
        passengers++;
        i++;
    }
    printf("Passengers Allowed: %d\n", passengers);
    if (overload == 1)
        printf("Overload: Yes\n");
    else
        printf("Overload: No\n");
    return 0;
}
