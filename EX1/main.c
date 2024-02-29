#include <stdio.h>
int main() {

void print_sp(int i, int n) {
    for (int sp = 0; sp < n-i;sp++) {
        printf(" ");
    }
}
void pirnt_num(int n) {
    for (int i = 0; i<n;i++) {
        printf("%d ", n);
    }
    printf("\n");
}
    //main loop 
    int rows = 6;
    for (int i = 0; i <= rows; i++) {
        //
        print_sp(i, rows);
        //
        pirnt_num(i);
    }    
    return 0;
}