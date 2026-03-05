#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}