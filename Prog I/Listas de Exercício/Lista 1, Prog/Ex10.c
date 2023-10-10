#include <stdio.h>

int main(){
    int km, litros, medio;

    printf("informe a distancia percorrida em km: ");
    scanf("%i", &km);

    printf("informe a quantidade de litros de combustivel gasto: ");
    scanf("%i", &litros);

    medio = km / litros;

    printf("o consumo medio do veiculo e: %d km/litro\n", medio);

    return 0;
}