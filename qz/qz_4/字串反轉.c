#include <stdio.h>

void reverse(char* str) {
    if(*str == '\0') {
        return;
    }
    reverse(str+1);
    putchar(*str);
}


int main(){
    char str[100];
    scanf("%99s", str);
    reverse(str);
    return 0;
}
