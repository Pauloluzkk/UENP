#include <stdio.h>
    int main(){
        char caractere;

        printf("informe um caractere \n");
        scanf("%c", &caractere);

        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            printf("essa letra e uma vogal \n");
        }
        else {
            printf("essa letra e uma consoante \n");
        }
        return 0;
    }