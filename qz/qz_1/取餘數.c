#include <stdio.h>

int main() {
    char i[11]; //第11個留給\0
    int a, b;
    scanf("%10s", i);   //取最多10個字元
    sscanf(i, "%d", &a);
    b = a%7;
    printf("%d", b);
    return 0;
}
