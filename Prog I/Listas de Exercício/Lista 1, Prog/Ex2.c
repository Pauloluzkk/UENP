#include <stdio.h>

int main(){
    float N1, N2, N3, N4;
    float media;

    printf("Insira sua nota em portugues");
    scanf("%f", &N1);

    printf("Insira sua nota em historia");
    scanf("%f", &N2);

    printf("Insira sua nota em fisica");
    scanf("%f", &N3);

    printf("Insira sua nota em matematica");
    scanf("%f", &N4);

    media = (1.5 * N1 + 2 * N2 + 3 * N3 + 4 * N4) / 10;

    printf("a media ponderada de suas notas e: %.2f\n", media);

    return 0;
}