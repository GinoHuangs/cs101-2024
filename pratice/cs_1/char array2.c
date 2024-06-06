#include <stdio.h>

int main() {
    char hello[] = "Hello";
    for(int i =0; i<sizeof(hello); i++) {
        printf("%d %c %d\n", i, hello[i], hello[i]);    //the last one is \0
    }
    return 0;
}
