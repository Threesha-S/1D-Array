#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n-1];
    int sum = 0;
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }
    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;
    printf("Missing roll number is: %d", missing);

    return 0;
}