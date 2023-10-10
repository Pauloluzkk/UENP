#include <stdio.h>
#include <math.h>

int main(){
    float area, perimetro, raio;

    printf("insira um raio de um circulo");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;    //utilizei o valor 3.14 como o aproximado de pi
    area = 3.14 * pow(raio, 2);

    printf("o perimetro do circulo e: %.2f\n", perimetro);
    printf("e a sua area sera: %.2f\n", area);

    return 0;
}