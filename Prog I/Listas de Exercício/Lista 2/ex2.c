#include <stdio.h>
    int main(){
        int n1, n2, n3;

        printf("informe tres numeros inteiros \n");
        scanf("%d %d %d", &n1, &n2, &n3);

        if(n1 > n2) {
            if (n2 > n3) {
                printf("%.d e o menor numero entre eles \n", n3);
            }
            else {
                printf("%.d e o menor numero entre eles \n", n2);
            }
        }
        else if(n1 < n2){
            if (n1 < n3){
                printf("%.d e o menor numero entre eles \n", n1);
            }
            else {
                printf("%.d e o menor numero entre eles \n", n3);
            }
        }
        return 0;
    }