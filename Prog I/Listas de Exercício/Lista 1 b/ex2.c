#include <stdio.h>
int main(){
    int area, base, altura;

    printf("informe a medida da base de um triangulo: \n");
    scanf("%d", &base);

    printf("informe agora a medida da altura desse mesmo triangulo \n");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("a area desse triangulo e igual a: %.d\n", area);

    return 0;
}