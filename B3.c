
#include <stdio.h>

void sum(int *a, int *b, int *c) {
    *c = *a + *b;
}

int main() {
    int a = 10;
    int b = 20;
    int c;
    sum(&a, &b, &c);
    printf("Tong cua hai so la: %d\n", c);
    return 0;
}