#include <stdio.h>

int main() {
    int n;
    printf("Nhập vào một số nguyên dương: ");
    scanf("%d", &n);

    printf("Các ước của %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
