//sequência de 2 números apenas com ímpares
#include <stdio.h>

    int main(){
        int inicio, fim, n;
        
        scanf("%d %d", &inicio, &fim);
        
        for(n = inicio+1; n < fim; n++){
            if(n % 2 == 1){
                printf("%.d\n", n);
            }
        }
        return 0;
    }

