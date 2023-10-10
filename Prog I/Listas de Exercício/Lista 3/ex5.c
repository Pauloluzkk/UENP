//media de numeros inteiros determinados pelo usuario
#include <stdio.h>
    int main(){
        int num = 0;
        float nota, soma, media;
        
        
        printf("quantos numeros inteiros voce pretende calcular?\n");
        scanf("%d", &num);
        
        printf("informe os numeros: \n");
        
        for(int i = 1; i <= num; i++){
            scanf("%f", &nota);
            soma += nota;
        }
        media = soma / num;
        printf("a media desses numeros e: %.2f\n", media);
        
        return 0;
    }
