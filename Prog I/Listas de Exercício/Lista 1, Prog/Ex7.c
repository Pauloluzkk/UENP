#include <stdio.h>

int main(){
    int valor_pago, cafes, valor_total, troco;

    printf("insira um valor a ser pago (multiplo de 5): ");
    scanf("%i", &valor_pago);

    cafes = valor_pago / 7;
    valor_total = cafes * 7;
    troco = valor_pago - valor_total;

    printf("voce comprou %d cafes e ira perder %d de troco. \n", cafes, troco);

    return 0;
}