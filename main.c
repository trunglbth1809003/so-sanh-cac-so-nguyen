#include <stdio.h>
#include <stdlib.h>

int arraynumber[10];
int max;
int min;

int main() {
    for (int i = 0; i < 10; ++i) {

        printf("nhap cac phan tu trong mang so nguyen:\n", i + 1);
        scanf("%d", &arraynumber[i]);
    }
    max = arraynumber[0];
    min = arraynumber[0];
    for (int j = 0; j < 10; ++j) {

    }
    if (min > arraynumber[10]);
        min = arraynumber[10];
    printf("phan tu nho nhat la: %d\n", min);

    if (max < arraynumber[10]);
        max = arraynumber[10];
    printf("phan tu lon nhat la: %d\n", max);



return 0;
}