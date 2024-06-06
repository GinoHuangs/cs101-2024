#include <stdio.h>

int str_compare(char a[], char b[]) {
    int eq = 1;
    for (int i=0, j=0; a[i]; i++, j++) {
        if(a[i] != b[i]) {
            eq=0;
            break;
        }
    }
    return eq;
}

int main() {
    char a[] = "hello";
    char b[] = "hellO";
    int eq=0;
    eq = str_compare(a, b);
    (eq) ? printf("%s == %s", a, b): printf("%s != %s", a, b);//eq=1就給對, 也可寫成eq==1
    return 0;
}
