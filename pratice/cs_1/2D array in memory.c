#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    for (int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("a[%d][%d] %p = %d\n", i, j, &a[i][j], a[i][j]);//00 01   10 11
        }
    }
}
