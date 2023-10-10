#include <stdio.h>
    int main(){
        float altura;
        int idade;
        printf("informe a sua altura e a sua idade: \n");
        scanf("%f %d", &altura, &idade);

        if(altura >= 1.5 && idade >= 12){
            printf("Pode ir na Barca Viking \n");
        }
        if(altura >= 1.4 && idade >= 14){
            printf("Pode ir no Elevator of Death \n");
        }
        if(altura >= 1.7 || idade >= 16){
            printf("Pode ir no Final Killer \n");
        }
        return 0;
    }