#include <stdio.h>
#include <stdlib.h>
int a[10];

int main()
{
    int i, n, max, min, j;
    for (i = 0; i < 10; i++)
    {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[10]; min = a[0];
    for (j = 1; j < 10; j++)
    {
        if (min > a[j])min = a[j];
        if (max < a[j])max = a[j];
    }
    printf("phan tu nho nhat la: %d\n", min);
    printf("phan tu lon nhat la: %d\n", max);
    return 0;
}