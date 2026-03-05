#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    int maxProfit = arr[1] - arr[0];
    for(int i = 1; i < n; i++) {
        int profit = arr[i] - min;
        if(profit > maxProfit)
            maxProfit = profit;
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%d", maxProfit);

    return 0;
}