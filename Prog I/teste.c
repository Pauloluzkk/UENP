#include <stdio.h> 
int main(){
    int media, n1, n2, n3, n4;

    printf("insira as suas 4 notas: \n");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    media = (n1+n2+n3+n4) / 4;

    printf("a sua media e: %.d\n", media);

    if (media >= 7) {
        printf("\n voce esta aprovado!!! \n");
    }
    else if (media >= 4 && media < 7) {
        printf("\n voce esta de exame");
    }
    else {
        printf("voce esta reprovado");
    }
    return 0;
    }