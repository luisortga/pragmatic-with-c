#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {

    printf("Calculando el factorial de un número usando recursividad\n");
    int numero = 8;
    int resultado = factorial(numero);

    printf("El factorial de %d es %d\n", numero, resultado);
    return 0;
}