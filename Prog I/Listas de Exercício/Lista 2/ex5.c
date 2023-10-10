#include <stdio.h>
    int main(){
        int c1, c2, c3;

        printf("informe o comprimento dos 3 lados de um triangulo \n");
        scanf("%d %d %d", &c1, &c2, &c3);

        if(c1 == c2 && c2 == c3){
            printf("o triangulo e equilatero \n");
        }
        else if(c1 == c2 || c2 == c3 || c1 == c3){
            printf("e um triangulo isosceles \n");
        }
        else{
            printf("o triangulo e escaleno \n");
        }
        return 0;
    }
