#include <stdio.h>

int main() {
    int n, i;
    float A = 0;

    printf("Nhap n (>1): ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        A += 1.0 / (i * (i + 1));
    }

    printf("A = %.5f\n", A);

    return 0;
}

