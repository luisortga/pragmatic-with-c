#include <stdio.h>

// Función que recibe un puntero y modifica el valor
void incrementar(int *num) {
    *num = *num + 1;  // * desreferencia (accede al valor)
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int z = 5;
    printf("Antes: %d\n", z);  // 5
    
    incrementar(&z);  // & obtiene la dirección
    printf("Después: %d\n", z);  // 6

    int x = 10, y = 20;
    printf("x=%d, y=%d\n", x, y);  // x=10, y=20
    
    swap(&x, &y);
    printf("x=%d, y=%d\n", x, y);  // x=20, y=10
    
    return 0;
}