
#include <stdio.h>
#include <stdlib.h>

int search(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    int index = search(arr, size, value);
    if (index == -1) {
        printf("Khong tim thay gia tri %d\n", value);
    } else {
        printf("Tim thay gia tri %d tai vi tri %d\n", value, index);
    }
    return 0;
}