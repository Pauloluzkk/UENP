#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, f1, f2, f3, f4;

    printf("informe os valores de a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);

    f1 = (a * b) / c;
    f2 = pow(a, 2) + b + (5 * c);
    f3 = a * b * c + b + (c / 3) * 5 - 1;
    f4 = (pow((a * b * c), 3)/2);

    printf("o valor da primeira formula e: %.2f\n", f1);
    printf("o valor da segunda formula e: %.2f\n", f2);
    printf("o valor da terceira formula e: %.2f\n", f3);
    printf("o valor da ultima formula e: %.2f\n", f4);


    return 0;
}