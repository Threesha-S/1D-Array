#include <stdio.h>

int main()
{
    int n,i,j;
    int a[100];
    int duplicate = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                duplicate = 1;
                break;
            }
        }
    }
    if(duplicate)
        printf("No");
    else
        printf("Yes");

    return 0;
}