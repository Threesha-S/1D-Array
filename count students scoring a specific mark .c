#include <stdio.h>

int main() {
    int n,i,x,count = 0;
    scanf("%d", &n);
    int marks[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(marks[i] == x) {
            count++;
        }
    }
    printf("Number of students scored %d = %d", x, count);

    return 0;
}