#include <stdio.h>

void quicksort(int lista[], int n) {
    int pivote = lista[0];
    int izquierda[n];
    int derecha[n];
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    if (n <= 1) return;

    for (i = 1; i < n; i++) {
        if (lista[i] < pivote)
            izquierda[j++] = lista[i];
        else
            derecha[k++] = lista[i];
        }
    quicksort(izquierda, j);
    quicksort(derecha, k);

    for (i = 0; i < j; i++) lista[i] = izquierda[i];

    lista[i] = pivote;

    for (i = i + 1; i < n; i++) lista[i] = derecha[i - j - 1];
}

int main() {

    int numeros[] = { 24, 16, 46, 4, 2, 22, 116 };
    int n = sizeof(numeros) / sizeof(numeros[0]);

    quicksort(numeros, n);

    int i;
    for (i = 0; i < n; i++) printf("%d ", numeros[i]);

    return 0;
}