#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int sales[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }
    for(i = 0; i < n - 1; i++) {
        if(sales[i] > sales[i + 1]) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");

    return 0;
}