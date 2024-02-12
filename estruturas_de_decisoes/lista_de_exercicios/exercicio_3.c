/*
Escreva um programa que leia dois valores inteiros quaisquer, e escreva o sinal do produto 
entre eles. Considere que apenas números diferentes de zero serão digitados.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor1, valor2, produto;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    produto = valor1 * valor2;

    if (produto > 0) {
        printf("O produto é %d sendo ele POSITIVO.\n", produto);
    } else if (produto < 0) {
        printf("O produto é %d sendo ele NEGATIVO.\n", produto);
    } else {
        printf("O produto é ZERO.\n");
    }

    return 0;
}