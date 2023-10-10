#include <stdio.h>
#include <math.h>
    int main(){
        float a, b, c, x1, x2, delta;

        printf("infore os valores de a, b e c: \n");
        scanf("%f %f %f", &a, &b, &c);

        delta = pow(b, 2) - (4 * a * c);
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if(delta < 0){
            printf("nao existem raizes reais na equacao \n");
        }
        if(a == 0){
            printf("a equacao nao e de segundo grau \n");
        }
        else{
            printf("as raizes sao x1: %.f , x2: %.f\n", x1, x2);
        }
        return 0;
    }
