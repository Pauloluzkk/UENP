#include <stdio.h>

int main() {
    int prev1 = 1;
    int prev2 = 2;
    int current = 0;
    int sum = 2; // Inicializamos com 2 porque o segundo termo (2) é par.

    while (current <= 4000000) {
        current = prev1 + prev2;
        if (current % 2 == 0) {
            sum += current;
        }
        prev1 = prev2;
        prev2 = current;
    }

    printf("A soma dos termos pares na sequência de Fibonacci até 4 milhões é: %d\n", sum);
    return 0;
}