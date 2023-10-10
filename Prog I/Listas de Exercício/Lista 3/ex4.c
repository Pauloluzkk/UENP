#include <stdio.h>
    int main(){
        float s;
        int x = 1;
        int y = 1;
        while(x <= 99 && y <= 50){
            s += (float)x/y;
            x += 2;
            y++;
        }
        printf("o valor de S e: %.2f\n", s);
        return 0;
    }