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
    
/*
#include <stdio.h> 
    
int abs(int i) {
    if (i<0) {
        return -i;
    }
    else {
        return i;   
    }
}

int main() {
    int n;
    n = abs(-5);
    printf("abs = %d\n", n);
    
    return 0 ;
}
*/
