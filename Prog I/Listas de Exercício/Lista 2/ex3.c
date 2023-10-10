#include <stdio.h>
    int main(){
        float n1, n2, n3, media;

        printf("Informe o valor de 3 numeros positivos: \n");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;

        printf("a media e: %.f\n", media);

        if(n1 > media || n2 > media || n3 > media){
            if(n1 > media && n2> media || n2 > media && n3 > media ||
             n1 > media && n3 > media){
                printf("2 numeros estao acima da media");
             }
             else{
                printf("1 numero esta acima da media");
             }
        }
        else{
            printf("nenhum numero esta acima da media");
        }
            
       
        return 0;
    }