#include <stdio.h>
#include <math.h>

int main() {
    double r, chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    chu_vi = 2 * M_PI * r;
    dien_tich = M_PI * r * r;

    printf("Chu vi = %.2f\n", chu_vi);
    printf("Dien tich = %.2f\n", dien_tich);

    return 0;
}

