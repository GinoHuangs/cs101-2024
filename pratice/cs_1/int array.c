#include <stdio.h>

int main() {
    int a[5] = { [0]=1, [2]=3};
    for(int i=0; i<5; i++) {
        printf("[%d] = %d\n", i, a[i]);
    }
    return 0;
}
