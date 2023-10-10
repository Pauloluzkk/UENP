#include <stdio.h>
    int main(){
        int salario, profissao, salariototal;
        printf("informe o seu salario: \n");
        scanf("%d", &salario);
        printf("qual a sua profissao \n");
        printf("1. Vendedor(a) \n");
        printf("2. Auxiliar de escritorio \n");
        printf("3. Auxiliar de Enfermagem \n");
        printf("4. Bibliotecario \n");
        scanf("%d", &profissao);

        switch(profissao){
            case 1:
                salariototal = salario * 1.10;
                printf("O seu salario apos os reajustes sera: %.d\n", salariototal);
                break;
            case 2:
                salariototal = salario * 1.07;
                printf("O seu salario apos os reajustes sera: %.d\n", salariototal);
                break;
            case 3:
                salariototal = salario * 1.12;
                printf("O seu salario apos os reajustes sera: %.d\n", salariototal);
                break;
            case 4:
                salariototal = salario * 1.11;
                printf("O seu salario apos os reajustes sera: %.d\n", salariototal);
                break;
            default:
                printf("valor invalido \n");
        }
        return 0;
    }