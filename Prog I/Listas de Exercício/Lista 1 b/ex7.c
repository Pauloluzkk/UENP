#include <stdio.h>
int main(){
    float dias, km, valortotal, valordesconto;

    printf("quantos dias voce ficou com o carro? \n");
    scanf("%f", &dias);

    printf("quantos km voce rodou com o carro nesse periodo? \n");
    scanf("%f", &km);

    valortotal = (dias * 30) + (km * 0.01);
    valordesconto = valortotal - (valortotal * 0.10);

    printf("o valor a ser pago sera: %.2fR$\n", valordesconto);

    return 0;

}