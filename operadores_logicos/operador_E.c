#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero:");
      scanf("%d", &numero);

    if (numero >= 0 && numero <= 100) {
      printf("O numero esta na faixa de 0 a 100 \n");
    }   else {
          printf("O numero esta fora da faixa de 0 a 100 \n");
    }
  
  return 0;
}