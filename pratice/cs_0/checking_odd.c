/*
2進位: 0b1111 (0b 代表二進位binary)
16進位: 0xF (0x代表十六進位)
10進位: 15 (因為人們平常看到數字都直接知道是10進位，所以不用特別標註)
*/
#include <stdio.h>

int check_odd(int n) {
    return n&0x1;
}

int main() {
    int n = check_odd(1);
    printf("%d\n", n);
    if (n==1) {
        printf("the number is odd\n");
    } else {
        printf("the number is even\n");
    }
    int m = check_odd(2);
    
    printf("%d\n", m);
    if (m==1) {
        printf("the number is odd\n");
    } else {
        printf("the number is even\n");
    }
    return 0;
}
