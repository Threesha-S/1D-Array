#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
    }
    printf("%d", count);

    return 0;
}