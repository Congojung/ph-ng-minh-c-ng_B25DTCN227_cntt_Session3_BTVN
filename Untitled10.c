#include <stdio.h>
#include <math.h>

int main() {
    float a, b, S;

    printf("Nhap a = ");
    scanf("%f", &a);

    printf("Nhap b = ");
    scanf("%f", &b);

    S = sqrt(a * a + b * b);

    printf("S = %.2f\n", S);

    return 0;
}

