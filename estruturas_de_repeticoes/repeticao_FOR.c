#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero, resultado;
  int i;

  for (i = 0; i < 5; i++) {               /* Laço de repetição tem uma quantidade de repetições */
    printf("Digite um numero:\n");
      scanf("%d", &numero);
  
    resultado = numero * 3;
  
    printf("Resultado foi: %d \n", resultado);
  }

  return 0;
}