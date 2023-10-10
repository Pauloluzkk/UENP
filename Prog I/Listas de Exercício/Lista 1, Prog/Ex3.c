#include <stdio.h>

int main(){
    float reais, dolar, euro;

    printf("insira o valor em reais");
    scanf("%f", &reais);

    dolar = reais / 5.03;
    euro = reais / 5.57;

    printf("em dolar isso equivale a: %.2f\n", dolar);
    printf("e em euros equivale a: %.2f", euro);

    return 0;
}