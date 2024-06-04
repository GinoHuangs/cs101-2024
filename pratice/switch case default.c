#include <stdio.h>

int main() {
    char grade = 'A';
    printf("Your grade is %c\n", grade);
    switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
    case 'C':
        printf("Well dowm!\n");
        break;
    case 'D':
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    return 0;
}
