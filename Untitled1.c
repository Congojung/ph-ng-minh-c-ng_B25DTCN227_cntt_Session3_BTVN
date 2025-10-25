#include <stdio.h>

int main() {
    char name[50];

    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); 
    printf("Xin chao %s", name); 
    return 0;
}

