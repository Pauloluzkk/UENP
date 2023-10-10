#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distancia;

    printf("Insira as cordenadas do ponto A:  ");
    printf("X:");
    scanf("%f", &x1);

    printf("Y:");
    scanf("%f", &y1);

    printf("Insira as coordenadas do ponto B:  ");
    printf("X:");
    scanf("%f", &x2);

    printf("Y:");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os dois pontos e: %.2f\n", distancia);

    return 0;
}