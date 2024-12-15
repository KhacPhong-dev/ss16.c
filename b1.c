#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("Gia tri cua a la: %d\n", a);
    printf("Dia chi cua a la: %p\n", &a);
    printf("Gia tri cua p la: %d\n", *p);
    printf("Dia chi cua p la: %p\n", p);
    return 0;
}