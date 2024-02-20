#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia 20 valores inteiros e escreva no final a soma dos valores
positivos e a média dos valores negativos */

int main() {
  int numero[20], media;
  int somaPos = 0, qtPos = 0;
  int somaNeg = 0, qtNeg = 0;

  for (int i = 0; i < 20; i++) {               
    printf("Digite um numero sendo ele positivo ou negativo:\n");
      scanf("%d", &numero[i]);

      if (numero[i] >= 0) {
        somaPos += numero[i];
        qtPos++;
      } else {
        somaNeg += numero[i];
        qtNeg++;
      }
  }
  
  media = somaNeg / qtNeg;

  printf("A soma dos numeros positivos e: %d \n", somaPos);
  printf("A media dos numeros negativos e: %d \n", media);

  return 0;
}