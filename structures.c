#include <stdio.h>

// Función de suma
int sumar(int a, int b) {
    return a + b;
}

// Función de multiplicación
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 3;

    printf("Suma: %d + %d = %d\n", x, y, sumar(x, y));
    printf("Multiplicación: %d x %d = %d\n", x, y, multiplicar(x, y));

    return 0;
}