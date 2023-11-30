#include <stdio.h>

void sumar_uno_ref(int* a) {
  (*a)++;
}
void sumar_uno_val(int b) {
  (b)++;
}

int main() {
    int a = 5;
    int b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("-----\n");
    sumar_uno_val(a);
    sumar_uno_ref(&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
