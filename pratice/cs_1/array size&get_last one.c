#include <stdio.h>

int main() {
    int array_size = 16;
    int n[array_size];
    printf("array size %lu\n", (unsigned long)sizeof(n));
    printf("the last one in n[%lu]\n", (unsigned long)sizeof(n)/sizeof(int)-1);
    return 0;
}
