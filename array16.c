#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &prices[i]);
    int minPrice = prices[0];
    int maxProfit = prices[1] - prices[0]; // allow loss
    for(int i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;
        if(profit > maxProfit)
            maxProfit = profit;
        if(prices[i] < minPrice)
            minPrice = prices[i];
    }
    printf("%d", maxProfit);
    return 0;
}
