#include <stdio.h>

int main() {
    
    //Khai bao bien
    float gioLam, luongtheogio, luongcoban, phucap, tongluong;
    
    //Nhap so gio theo thang va so gio
    printf("Nhap so gio lam viec trong thang: ");
    scanf("%f", &gioLam);
    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luongtheogio);
    
    // Tinh luong co ban va phu cap neu co
    luongcoban = gioLam * luongtheogio;
    if (gioLam > 160) {
        phucap = luongcoban * 0.1;  
    } else {
        phucap = 0;  
    }
    
    // Tong luong va in ket qua ra man hinh
    tongluong = luongcoban + phucap;
    printf("Luong co ban: %.2f\n", luongcoban);
    printf("Phu cap: %.2f\n", phucap);
    printf("Tong luong: %.2f\n", tongluong);
    return 0;
}
	