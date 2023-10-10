//Ex 3
#include <stdio.h>
    int main(){
        int n;
        float soma = 0;
        
        printf("informe um numero inteiro: \n");
        scanf("%d", &n);
        
        for(int x = 1; x <= n; x++){
            soma += 1.0/x;
        }
        printf("o valor da soma e: %.2f\n", soma);
        
        return 0;
    }