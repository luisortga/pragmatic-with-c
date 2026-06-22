#include <stdio.h>

// Calcula división y residuo
void dividir(int dividendo, int divisor, int *cociente, int *residuo) {
    *cociente = dividendo / divisor;
    *residuo = dividendo % divisor;
}

int main() {
    int coc, res;
    
    dividir(17, 5, &coc, &res);
    printf("17 ÷ 5 = %d con residuo %d\n", coc, res);  // 3 con residuo 2
    
    return 0;
}