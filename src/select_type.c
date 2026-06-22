#include<stdio.h>

void imprimir(int puntero) {
    printf("\nValor del puntero: %d", puntero);
}

int main() {
    int value = 69;
    printf("%d\n", value);
    
    // punteros
    int number = 12;
    int *point = &number;

    *point = 24;
    imprimir(*point);

    printf("bajo nivel");


    return 0;
}