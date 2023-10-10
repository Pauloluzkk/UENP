#include <stdio.h>
#include <math.h>

int main(){
    float imc, massa, altura;

    printf("informe a sua massa e a sua altura: \n");
    scanf("%f %f", &massa, &altura);

    imc = massa / pow(altura, 2);

    printf("o seu imc e igual a: %.2f\n", imc);

    return 0;
}