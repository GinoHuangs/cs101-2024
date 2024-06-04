#include <stdio.h> 
    
int abs(int i) {
    return (i<0)? -i: i;
}

int main() {
    int n;
    n = abs(-5);
    printf("abs = %d\n", n);
    
    return 0 ;
}
    
