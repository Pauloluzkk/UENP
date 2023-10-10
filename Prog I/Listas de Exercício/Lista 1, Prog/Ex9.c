#include <stdio.h>

int main(){
    float diaria, ocupacao, diaria_desc, total_desc, total_normal, ocupacao2;

    printf("informe o valor da diaria: ");
    scanf("%f", &diaria);

    ocupacao = 45 * 0.35;
    ocupacao2 = 45 * 0.70;
    diaria_desc = diaria * 0.70;
    total_desc = ocupacao2 * diaria_desc;
    total_normal = ocupacao * diaria;

    printf("o valor da diaria com desconto sera: %.2f\n", diaria_desc);

    printf("o total com desconto e o dobro da ocupacao sera: %.2f\n", total_desc);

    printf("o total arrecadado com ocupacao e diaria normal sera: %.2f\n", total_normal);

    return 0;
}