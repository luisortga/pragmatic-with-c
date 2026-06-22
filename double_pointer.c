#include <stdio.h>

void cambiarPuntero(int **pp) {
    **pp = 100;  // Modifica el valor al que apunta el puntero
}

int main() {
    int x = 50;
    int *p = &x;        // p apunta a x
    int **pp = &p;      // pp apunta a p
    
    printf("x antes: %d\n", x);  // 50
    cambiarPuntero(pp);
    printf("x después: %d\n", x);  // 100

    printf("%d - %d", p, pp);
    
    return 0;
}