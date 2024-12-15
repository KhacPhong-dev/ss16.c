
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char restr[100];
    printf("Nhap vao chuoi: ");
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        restr[i] = str[length - i - 1];
    }
    restr[length] = '\0';
    printf("Chuoi dao nguoc: %s\n", restr);
    return 0;
}
