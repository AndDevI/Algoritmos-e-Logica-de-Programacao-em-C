#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia dois números inteiros quaisquer. No final escrever os números
entre eles. */

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Garante que o primeiro número é menor que o segundo
    if (numero1 > numero2) {
        int temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    printf("Numeros no intervalo entre %d e %d:\n", numero1, numero2);
    
    for (int i = numero1 + 1; i < numero2; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}