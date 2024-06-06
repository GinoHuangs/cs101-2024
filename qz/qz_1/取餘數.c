#include <stdio.h>

int main() {
    char i[10];
    int a, b;
    scanf("%s", i);
    sscanf(i, "%d", &a);
    b = a%7;
    printf("%d", b);
    return 0;
}
