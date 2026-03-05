#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int maxLen = 1, count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            count++;
            if(count > maxLen)
                maxLen = count;
        } else {
            count = 1;
        }
    }
    printf("%d", maxLen);

    return 0;
}