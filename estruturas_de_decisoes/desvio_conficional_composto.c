#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;

  printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0){  /*SE o numero digitado pelo usuario é maior que 0 */
      printf("POSITIVO \n");
    } else { /*SE NÃO o numero digitado pelo usuario é maior que 0 */
      printf("NEGATIVO \n");
    }
   return 0;
}