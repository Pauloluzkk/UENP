#include <stdio.h>
int main(){
    int a, b, c, d, diferenca;
    printf("informe os valores de A, B, C e D: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = (a * b) - (c * d);

    printf("a diferença entre os produtos de ab e cd sera: %.2d\n", diferenca);

    return 0;
}