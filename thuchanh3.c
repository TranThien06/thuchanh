#include <stdio.h>

int main() {
    int choice;
    double amount, result;

    // Hien thi menu lua chon
    printf("========Chuong trinh chuyen doi tien te========\n");
    printf("Chon loai tien muon chuyen doi:\n");
    printf("1. USD sang VND\n");
    printf("2. EUR sang VND\n");
    printf("3. GBP sang VND\n");
    printf("4. JPY sang VND\n");
    printf("Nhap lua chon cua ban (1-8): ");
    scanf("%d", &choice);

    // Nhap so tien can chuyen doi
    printf("Nhap so tien can chuyen doi: ");
    scanf("%lf", &amount);

    switch (choice) {
        case 1: // USD sang VND
            result = amount * 23500;
            printf("%.2lf USD = %.2lf VND\n", amount, result);
            break;
        case 2: // EUR sang VND
            result = amount * 25000;
            printf("%.2lf EUR = %.2lf VND\n", amount, result);
            break;
        case 3: // GBP sang VND
            result = amount * 28000;
            printf("%.2lf GBP = %.2lf VND\n", amount, result);
            break;
        case 4: // JPY sang VND
            result = amount * 180;
            printf("%.2lf JPY = %.2lf VND\n", amount, result);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}