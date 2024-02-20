#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia números inteiros enquanto o usuário digitar um número maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somatório dos números
lidos. */

int main() {
  int soma = 0, numero;

   do {
    printf("Digite um numero inteiro (digite um numero negativo para encerrar):");
      scanf("%d", &numero);

    if (numero >= 0) {
      soma += numero;
    }
    
  } while (numero >=0);
  
  
  printf("A soma dos numeros lidos e: %d \n", soma);

  return 0;
}