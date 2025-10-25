#include <stdio.h>

int main() {
    int n, nghich_dao;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    nghich_dao = (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + (n / 1000);

    printf("So nghich dao la: %d\n", nghich_dao);

    return 0;
}

