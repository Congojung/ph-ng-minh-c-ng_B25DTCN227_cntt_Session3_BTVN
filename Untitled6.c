#include <stdio.h>

int main() {
    float day, cao, dientich;

    printf("Nhap do dai canh day: ");
    scanf("%f", &day);

    printf("Nhap chieu cao: ");
    scanf("%f", &cao);

    dientich = 0.5 * day * cao;

    printf("Dien tich tam giac = %.2f\n", dientich);

    return 0;
}

