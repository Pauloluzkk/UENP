#include <stdio.h>
    int main(){
        int x, y, escolha;
        float valor;
        printf("informe o valor de x e y: \n");
        scanf("%d %d", &x, &y);
        printf("agora escolha uma operacao: \n");
        printf("1. Media aritmetica entre eles \n");
        printf("2. diferenca do maior para o menor numero \n");
        printf("3. produto entre eles \n");
        printf("4. divisao entre eles \n");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                valor = (x + y) / 2;
                printf("A media entre os valores e: %.f\n", valor);
                break;
            case 2:
                if(x > y){
                    valor = x - y;
                }
                else{
                    valor = y - x;
                }
                printf("a diferenca entre os valores e: %.f\n", valor);
                break;
            case 3:
                valor = x * y;
                printf("o produto dos valores e: %.f\n", valor);
                break;
            case 4:
                if(y != 0){
                valor = x / y;
                printf("a divisao entre os valores e: %.f\n", valor);
                }
                else{
                    printf("valor de Y invalido! \n");
                }
                break;
            default:
                printf("valor invalido! \n");
        }
        return 0;
    }