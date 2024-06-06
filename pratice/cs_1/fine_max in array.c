#include <stdio.h>

int find_max(int a[], int arr_size) {
    int max = -1;
    int index = -1;
    for(int i = 0; i<arr_size; i++) {
        if(a[i]>max) {
            index=i;
            max = a[i];
        }
        
    }
    return index; //only return index
}

int main() {
    int arr[] = {10, 9, 1, 11, 3, 6, 88, 3, 4, 5, 8, 18};
    int max = -1;
    int arr_size = sizeof(arr)/sizeof(int); //得到 有幾個數字
    max = find_max(arr, arr_size);
    printf("max %d\n", max);
    return 0;
}
