#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Função para encontrar dois números primos que somam a um número dado
void encontrarPrimos(int numero) {
    int primo1, primo2;

    for (primo1 = 2; primo1 <= numero / 2; primo1++) {
        if (ehPrimo(primo1)) {
            primo2 = numero - primo1;
            if (ehPrimo(primo2)) {
                printf("%d + %d = %d\n", primo1, primo2, numero);
                return;
            }
        }
    }

    printf("Não foi possível encontrar dois números primos cuja soma seja igual a %d.\n", numero);
}

int main() {
    int numero;

    printf("Digite um número inteiro maior do que 2: ");
    scanf("%d", &numero);

    if (numero <= 2) {
        printf("O número deve ser maior do que 2.\n");
    } else {
        encontrarPrimos(numero);
    }

    return 0;
}
