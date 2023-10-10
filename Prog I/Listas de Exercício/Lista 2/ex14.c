#include <stdio.h>

int main() {
    float trajeto, consumo;
    char tipo;

    printf("Informe o trajeto em km: ");
    scanf("%f", &trajeto);

    printf("Informe o tipo do veiculo (A, B ou C): ");
    scanf(" %c", &tipo);

    switch (tipo) {
        case 'A':
            consumo = trajeto / 15.0;
            break;
        case 'B':
            consumo = trajeto / 12.0;
            break;
        case 'C':
            consumo = trajeto / 10.0;
            break;
        default:
            printf("Tipo de veiculo invalido.\n");
            return 0;
    }

    printf("O consumo estimado de combustivel e: %.2f litros\n", consumo);

    return 0;
}
