/*
Escreva um programa que leia um vetor A com 20 elementos numéricos inteiros. Construir
um vetor B como os mesmos elementos do vetor A, sendo que deverão estar invertidos, ou
seja, o primeiro elemento de A passa a ser o último elemento de B, o segundo elemento de
A passa a ser o penúltimo elemento de B e assim sucessivamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[20], vetorB[20], i, j;

      // Lê os elementos do vetor A
      printf("Digite os elementos do vetor A:\n");
        for (i = 0; i < 20; i++) {
            printf("Digite um numero para o vetor A[%d]: ", i);
            scanf("%d", &vetorA[i]);
        }

      // Constrói o vetor B invertido
      for (i = 0, j = 19; i < 20; i++, j--) {
          vetorB[j] = vetorA[i];
      }

      // Imprime o vetor A
      printf("Vetor A:\n");
        for (i = 0; i < 20; i++) {
            printf("%d ", vetorA[i]);
        }

      // Imprime o vetor B invertido
      printf("\nVetor B (invertido de A):\n");
        for (i = 0; i < 20; i++) {
            printf("%d ", vetorB[i]);
        }

    return 0;
}