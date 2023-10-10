#include <stdio.h>
    int main(){
        int n1, n2, n3, n4;
        float media;

        printf("informe as notas dos seus alunos (0 para encerrar)\n");
        do{
            printf("informe as notas: \n");
            scanf("%d %d %d %d", &n1, &n2, &n3, &n3);
            media = (n1+n2+n3+n4)/4;

            printf("a media desse aluno e: %.f\n", media);

        }while(n1 != 0);
        return 0;
    }