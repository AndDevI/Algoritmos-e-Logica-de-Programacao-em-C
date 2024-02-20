#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia do teclado 25 valores inteiros e escreva no final a soma dos
valores que foram lidos. */

int main() {
  int soma = 0, numero[25];

  for (int i = 0; i < 25; i++) {               
    printf("Digite um numero:\n");
      scanf("%d", &numero[i]);
  
    soma += numero[i]; 
  }
  
  printf("Resultado foi: %d \n", soma);

  return 0;
}