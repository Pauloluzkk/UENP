#include <stdio.h>
    int main(){
        int n1, n2, resultado;

        for(n1 = 1; n1 <= 10; n1++){
            printf("Taboada do %.d\n", n1);
            for(n2 = 1; n2 <= 10; n2++){
                resultado = n1 * n2;
                printf("%.d x %.d = %.d\n", n1, n2, resultado);
            }
            printf("\n");
        }
        return 0;
}