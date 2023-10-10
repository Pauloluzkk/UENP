#include <stdio.h>
//função para multiplicação do comprimento e largura
float calcularArea(float comprimento, float largura){
return comprimento * largura;
}

int main() {
    int n;
    float area;
    
    printf("quantos terrenos vai analisar \n");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        float comprimento, largura;
        printf("informe o comprimento \n");
        scanf("%f", &comprimento);
        printf("informe a largura \n");
        scanf("%f", &largura);
        
        area = calcularArea(comprimento, largura); //chama a função
        printf("a area do terreno %.d e: %.2f\n", i, area);
    }
    
    return 0;
}
