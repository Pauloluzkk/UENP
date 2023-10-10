#include <stdio.h>
    int main(){
        int interface_grafica, ia, encapsulamento, indentacao, structs;

        printf("Informe 0 para Falso e 1 para Verdadeiro: \n");
        printf("\n o seu trabalho possui: \n");
        printf("interface grafica? \n");
        scanf("%d", &interface_grafica);

        printf("inteligenca artificial? \n");
        scanf("%d", &ia);

        printf("encapusulamento? \n");
        scanf("%d", &encapsulamento);

        printf("identacao? \n");
        scanf("%d", &indentacao);

        printf("structs? \n");
        scanf("%d", &structs);

        if(interface_grafica == 1 || ia == 1){
            if(encapsulamento == 1 && indentacao == 1 && structs == 1){
                printf("o seu trabalho sera avaliado \n");
            }
        }
        else{
            printf("o seu trabalho nao atendeu os requisitos e sera zerado \n");
        }
        return 0;
    }