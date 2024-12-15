
#include <stdio.h>
#include <stdlib.h>

void update(int *arr, int new_value, int index) {
    arr[index] = new_value;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    update(arr, 10, 2);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}