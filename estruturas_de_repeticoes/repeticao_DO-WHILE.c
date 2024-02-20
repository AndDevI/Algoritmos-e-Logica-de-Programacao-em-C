#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  
  do {
    printf("Digite um numero:");
      scanf("%d", &numero);
  } while (numero !=0);
  
  return 0;
}