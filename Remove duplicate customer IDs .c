#include <stdio.h>

int main() {
    int n,i,j,Duplicate;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unique Customer IDs : ");
    for(i = 0; i < n; i++) {
        Duplicate = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                Duplicate = 1;
                break;
            }
        }
        if(Duplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}