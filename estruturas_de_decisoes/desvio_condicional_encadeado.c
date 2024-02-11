#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;

  printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
      printf("POSITIVO \n");
    } else if (numero < 0) {
       printf("NEGATIVO \n");
    }   else {
          printf("ZERO \n");
    }
   return 0; 
}