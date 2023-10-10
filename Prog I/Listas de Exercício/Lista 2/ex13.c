#include <stdio.h>
    int main(){
        int saldo_medio, credito;

        printf("informe o valor do seu saldo medio: \n");
        scanf("%d", &saldo_medio);

        if(saldo_medio > 400){
            credito = saldo_medio * 0.30;
            printf("o valor do credito e: %d\n", credito);
        }
        if(saldo_medio <= 400 && saldo_medio > 300){
            credito = saldo_medio * 0.25;
            printf("o valor do credito e: %d\n", credito);
        }
        if(saldo_medio <= 300 && saldo_medio > 200){
            credito = saldo_medio * 0.20;
            printf("o valor do credito e: %d\n", credito);
        }
        if(saldo_medio <= 200){
            credito = saldo_medio * 0.1;
            printf("o valor do credito e: %d\n", credito);
        }
        return 0;
    }