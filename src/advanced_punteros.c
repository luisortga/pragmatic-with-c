#include <stdio.h>

// Función que recibe un puntero y modifica el valor
void incrementar(int *num) {
    *num = *num + 1;  // * desreferencia (accede al valor)
}

int main() {
    int x = 5;
    printf("Antes: %d\n", x);  // 5
    
    incrementar(&x);  // & obtiene la dirección
    printf("Después: %d\n", x);  // 6
    
    return 0;
}