#include <stdio.h>

int main(){
    int hr, min, sec, totalsec;

    printf("Insira a hora");
    scanf("%i", &hr);

    printf("insira o minuto");
    scanf("%i", &min);

    printf("insira os segundos");
    scanf("%i", &sec);
    
    totalsec = hr * 3600 + min * 60 + sec;

    printf("o total de segundos deste momento e: %.2i\n", totalsec);

    return 0;
}