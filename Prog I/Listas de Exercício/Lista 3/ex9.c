#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d é um numero primo.\n", number);
    } else {
        printf("%d não é um numero primo.\n", number);
    }

    return 0;
}
