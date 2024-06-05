#include <stdio.h>

int main() {
    char n[10];
    int i, j;
    for(i=0; i<10; i++) {
        n[i] = 'A'+i; 
    }
    for(j=0; j<10; j++) {
        printf("%d is %c in %p\n", j, n[j], &n[j]);
    }
}
