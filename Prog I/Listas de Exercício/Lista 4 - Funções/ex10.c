#include <stdio.h>

    char caractere(char x){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'u' || x == 'o'){
            printf("e uma vogal");
        }
        else{
            printf("e uma consoante");
        }
    }
    int main(){
        char x;
        printf("informe um caractere: \n");
        scanf("%c", &x);
        caractere(x);

        return 0;
    }