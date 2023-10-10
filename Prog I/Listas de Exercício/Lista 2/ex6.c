#include <stdio.h>
int main(){
int quantidade, produtoescolhido;
float precototal, desconto;
printf("Qual produto voce escolhe \n");
scanf("%i",&produtoescolhido);
switch(produtoescolhido)
{
   
    case 1:
        printf("Qual a quantidade que voce deseja:");
        scanf("%i", &quantidade);
        precototal = quantidade * 5.30;
        desconto = precototal * 0.15;
        if (precototal>=40 || quantidade>=15){
        printf("O total a pagar eh: %.2f\n",(precototal - desconto));
        }
        else{
        printf ("O total a pagar eh: %.2f\n", precototal);
        }        
        break;
    case 2:
        printf("Qual a quantidade que voce deseja:");
        scanf("%i", &quantidade);
        precototal = quantidade * 6.00;
        desconto = precototal * 0.15;
        if (precototal>=40 || quantidade>=15){
        printf("O total a pagar eh: %.2f\n",precototal - desconto);
        }
        else{
        printf ("O total a pagar eh: %.2f\n", precototal);
        }        
        break;
    case 3:
        printf("Qual a quantidade que voce deseja:");
        scanf("%i", &quantidade);
        precototal = quantidade * 3.20;
        desconto = precototal * 0.15;
        if (precototal>=40 || quantidade>=15){
            printf("O total a pagar eh: %.2f\n",precototal - desconto);
        }
        else{
        printf ("O total a pagar eh: %.2f\n", precototal);
        }
        break;
    case 4:
        printf("Qual a quantidade que voce deseja:");
        scanf("%i", &quantidade);
        precototal = quantidade * 2.50;
        desconto = precototal * 0.15;
        if (precototal>=40 || quantidade>=15){
        printf("O total a pagar eh: %.2f\n",precototal - desconto);
        }
        else{
        printf ("O total a pagar eh: %.2f\n", precototal);
        }
        break;
    default:
        printf("Valor invalido!");
        break;
}
return 0;
}