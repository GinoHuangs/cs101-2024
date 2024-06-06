#include <stdio.h>

double get_average(int arr[], int arr_size) {
    double sum = 0.0;
    for(int i; i<arr_size; i++) {
        sum += arr[i];
    }
    return sum/arr_size;
}

int main() {
    int balance[5] = {100, 2, 3, 17, 50};
    double avg=0.0;
    avg = get_average(balance, 5);
    printf("Averge value is %.2f\n", avg);
    return 0;
}
