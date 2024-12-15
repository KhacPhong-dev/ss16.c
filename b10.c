//Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm xóa phần tử có 2 tham số gồm 1 mảng và vị trí cần xóa. Gọi hàm với mảng đã khai báo và in mảng mới để kiểm tra kết quả.

#include <stdio.h>
#include <stdlib.h>

void delete(int *arr, int index) {
    int size = sizeof(arr) / sizeof(arr[0]);
    int new_arr[size - 1];
    for (int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
    }
    for (int i = index; i < size - 1; i++) {
        new_arr[i] = arr[i + 1];
    }
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    delete(arr, 2);
    return 0;
}