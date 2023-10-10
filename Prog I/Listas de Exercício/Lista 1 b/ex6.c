#include <stdio.h>
int main(){
    float horas, valorhora, numero, salario;
    printf("qual o seu numero de funcionario? \n");
    scanf("%f", &numero);
    printf("quantas horas voce trabalhou? \n");
    scanf("%f", &horas);
    printf("quanto voce ganha por hora trabalhada? \n");
    scanf("%f", &valorhora);

    salario = horas * valorhora;

    printf("funcionario numero %.f, voce ganha um salario de: %.2f reais\n", numero, salario);

    return 0;
}