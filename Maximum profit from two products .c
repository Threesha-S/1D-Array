#include <stdio.h>

int main()
{
    int n,i;
    int a[100];
    int max1=-10000, max2=-10000;
    int min1=10000, min2=10000;
    int product1,product2,maxProduct;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }

        if(a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2)
        {
            min2 = a[i];
        }
    }
    product1 = max1 * max2;
    product2 = min1 * min2;

    if(product1 > product2)
        maxProduct = product1;
    else
        maxProduct = product2;

    printf("%d", maxProduct);

    return 0;
}