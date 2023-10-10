#include <stdio.h>

int main(){
    float salario_liquido, salario_base;

    printf("informe o seu salario-base: ");
    scanf("%f", &salario_base);

    salario_liquido = salario_base + 50 - (salario_base * 0.12);

    printf("o seu salario liquido apos as operacoes sera: %.2f\n", salario_liquido);

    return 0;
}