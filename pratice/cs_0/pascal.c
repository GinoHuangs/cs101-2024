#include <stdio.h>
//rows always is 5
void print_spaces(int rows,int r) {
    //when r=0, space print 5 time.
    //when r=1, space print 4 time.
    for(int space=1; space <= rows-r; space++) {
        printf(" ");
    }
}

void print_pascal_number(int rows, int r) {
    int coef; //coef係數
    for(int j=0; j<=r; j++) { 
        if (j==0 || r==0) { //|| mean or 
            coef = 1;
        }
        else {
            coef =coef * (r-j+1)/j; //算法
        }
        printf("%d ", coef);
    }
}

int main() {
    //main loop for rows i=0 to 5
    int rows = 5;
    for(int r=0; r<rows; r++) { //r from 0 to 4
    print_spaces(rows, r);
    print_pascal_number(rows, r);
    printf("\n");
    }
}
