#include <stdio.h>

void cambiar_valor(int *ptr) {
    *ptr = 100;  // Modificamos el valor en la dirección
}

int main() {
    int numero = 5;
    
    printf("Antes: %d\n", numero);
    cambiar_valor(&numero);  // Pasamos la dirección
    printf("Después: %d\n", numero);
    
    return 0;
}