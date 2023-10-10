//os 50 primeiros números múltiplos de 3
#include <stdio.h>
    int main(){
        int num = 1, count = 0;

        printf("os 50 primeiros multiplos de 3 sao: \n");

        while(count < 50){
            if(num % 3 == 0){
                printf("%.d\n", num);
                count++;
            }
            num++;
        }
        return 0;
    }