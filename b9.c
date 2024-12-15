
#include <stdio.h>
#include <stdlib.h>

void add(int *arr, int new_value, int index) {
    int size = sizeof(arr) / sizeof(arr[0]);
    int new_arr[size + 1];
    for (int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
    }
    new_arr[index] = new_value;
    for (int i = index + 1; i < size + 1; i++) {
        new_arr[i] = arr[i - 1];
    }
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    add(arr, 10, 2);
    return 0;
}