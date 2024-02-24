/*
Escreva um programa que faça o calculo da tabuada de um número qualquer e armazene os 
resultados em um vetor A. No final apresentar os valores armazenados.  
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;
    int vetorA[10];  

    printf("Digite um numero para a tabuada: ");
      scanf("%d", &numero);

    // Calcula e armazena os resultados no vetor A
    for (i = 0; i < 10; i++) {
        vetorA[i] = numero * (i + 1);
    }

    printf("Tabuada de %d:\n", numero);
      for (i = 0; i < 10; i++) {
          printf("%d x %d = %d\n", numero, i + 1, vetorA[i]);
      }

    return 0;
}
