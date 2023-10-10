#include <stdio.h>
    int main(){
        int x, y, n;

        printf("informe 2 numeros inteiros: \n");
        scanf("%d %d", &x, &y);

        for(n = x+1; n < y; n++){
            if(n % 5 == 2 ||  n % 5 == 3){
                printf("%.d \n", n);
            }
        }
        return 0;
    }