#include <stdio.h>
int main(){
    float valor, valorpago;

    printf("quanto custou o seu gasto no restaurante? \n");
    scanf("%f", &valor);

    valorpago = valor * 1.10;

    printf("o valor a ser pago total sera: %.2f\n", valorpago);

    return 0;
}