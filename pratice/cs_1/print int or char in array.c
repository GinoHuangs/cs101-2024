#include <stdio.h>

void print_str(char str[]) {
    printf("%s\n", str);
}

void print_int(int array_n[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ",array_n[i]);
    }
    printf("\n");
}

int main() {
    char hello[] = "hello";
    int array_n[] = {1, 2, 3, 4, 5, 6};
    print_str(hello);
    print_int(array_n, sizeof(array_n)/sizeof(int));
    return 0;
}
