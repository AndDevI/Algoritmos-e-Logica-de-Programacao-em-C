/*
Escreva um programa que leia uma letra do alfabeto das letras maiúsculas. Identificar qual 
letra foi digitado, ou seja, se foi A,B,C,....X,Y,Z. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    // Solicitação e leitura da letra maiúscula
    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &letra);  

    // Verifica e identifica a letra digitada
    if (letra >= 'A' && letra <= 'Z') {
        printf("A letra digitada é: %c\n", letra);
    } else {
        printf("Caractere inválido. Por favor, digite uma letra maiúscula.\n");
    }

    return 0;
}
