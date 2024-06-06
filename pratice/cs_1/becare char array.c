#include <stdio.h>

int main() {
    char n[] = "IUIU\0ABC";
    printf("%lu\n", (unsigned long)sizeof(n));
    printf("%s\n", n); // I U I U \0 A B C \0 (all 9)
    return 0;
}
