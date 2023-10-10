
#include <stdio.h>
    int main(){
        int n, cont = 0, total = 0;
        float media;

        printf("Digite um numero inteiro (ou 0 para encerrar):\n");

        do{
            printf("Digite um numero: \n");
            scanf("%d", &n);

            if(n >= 10 && n <= 50 && n % 7 == 0){
                cont++;
                total += n;
            }
        }while(n != 0);

        if(cont > 0){
            media = total / cont;
            printf("a quantidade de numeros multiplos de 7 entre 10 e 50 e: %.d\n", cont);
            printf("a media desses valores e: %.f\n", media);
        }
        else{
            printf("nenhum numero multiplo de 7 foi digitado!");
        }
        return 0;
    }