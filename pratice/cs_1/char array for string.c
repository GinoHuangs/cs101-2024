#include <stdio.h>

int main() {
    char n[10];
    for(int i=0; i<10; i++) {
        n[i] = 'A'+i;
    }
    for(int j=0; j<10; j++) {
        printf("n=%s array[%d] = %c at RAM address %p\n", n, j, n[j], &n[j]);
    }
    return 0;
}
