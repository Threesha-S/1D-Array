#include <stdio.h>

int main() {
    int n, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            if(!found) {
                min = arr[i];
                found = 1;
            }
            else if(arr[i] < min)
                min = arr[i];
        }
    }
    if(found)
        printf("%d", min);
    else
        printf("No positive");

    return 0;
}