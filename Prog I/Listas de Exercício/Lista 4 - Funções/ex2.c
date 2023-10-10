//Faça uma função que receba como parâmetro um número inteiro e verifique se este é primo ou não
#include <stdio.h>

int num(int x){
    int cont, i = 0;


for(cont = 1; cont <= x; cont++){
    if(x % cont == 0){
        i++;
    }
}

if(i == 2){
    return 1;
}
else{
    return 0;
}
}

    int main(){
        int y;

        printf("Escolha um numero: \n");
        scanf("%d", &y);

        if(num(y) == 0){
            printf("nao e primo!\n");
        }

        else{
            printf("e primo!");
        }

        return 0;
        
    }