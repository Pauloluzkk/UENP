#include <stdio.h>
    int main(){
        int idade, jovem = 0, idoso = 0;
        
        do{
            printf("informe a idade de uma pessoa ou 0 para sair: \n");
            scanf("%d", &idade);

            if(idade <  18){
                jovem++;
            }
            else if(idade > 30){
                idoso++;
            }
        }while(idade != 0);
        printf("O total de pessoas com menos de 18 anos e: %.d\n", jovem);
        printf("O total de pessoas com mais de 30 anos e: %.d\n", idoso);
        return 0;
    }