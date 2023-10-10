#include <stdio.h>
    int main(){
        int x, y;
        printf("informe o valor dos pontos X e Y: \n");
        scanf("%d %d", &x, &y);
        
        if(x > 0 && y > 0){
            printf("o ponto esta no primeiro quadrante \n");
        }
        else if(x > 0 && y < 0){
            printf("esta no quarto quadrante \n");
        }
        else if(x < 0 && y > 0){
            printf("esta no segundo quadrante \n");
        }
        else if(x < 0 && y < 0){
            printf("esta no terceiro quadrante \n");
        }
         else if(x == 0){
            printf("esta no eixo Y \n");
        }
        else if(y == 0){
            printf("esta no eixo X \n");
        }
        
        return 0;
    }
