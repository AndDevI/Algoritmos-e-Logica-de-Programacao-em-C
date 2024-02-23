/*
Escreva um programa que leia dois vetores A e B com 20 elementos numéricos inteiros cada.
Construir um vetor C sendo a junção dos dois outros vetores. O vetor C deverá ter o dobro
de elementos. O vetor C terá nos seus 20 primeiros elementos o conteúdo do vetor A, e os
últimos 20 elementos o conteúdo do vetor B.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetorA[20], vetorB[20], vetorC[40], i;

    // Lê os elementos do vetor A
    printf("Digite os elementos do vetor A:\n");
      for (i = 0; i < 20; i++) {
          printf("Digite um numero para o vetor A[%d]: ", i);
          scanf("%d", &vetorA[i]);
      }

    // Lê os elementos do vetor B
    printf("Digite os elementos do vetor B:\n");
      for (i = 0; i < 20; i++) {
          printf("Digite um numero para o vetor B[%d]: ", i);
            scanf("%d", &vetorB[i]);
      }

    // Constrói o vetor C
    for (i = 0; i < 20; i++) {
        vetorC[i] = vetorA[i];  // Os 20 primeiros elementos são do vetor A
        vetorC[i + 20] = vetorB[i];  // Os últimos 20 elementos são do vetor B
    }

    // Imprime o vetor C
    printf("Vetor C (junção de A e B):\n");
      for (i = 0; i < 40; i++) {
          printf("%d ", vetorC[i]);
      }

  return 0;
}
