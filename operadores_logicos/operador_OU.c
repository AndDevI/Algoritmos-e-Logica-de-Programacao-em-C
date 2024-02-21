#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;

      printf("Digite o codigo do genero de uma pessesso:");
        scanf("%d", &codigo);
      
      if (codigo == 0 || codigo == 1) {
        printf("O codigo e valido \n");
      }  else {
          printf("O codigo e invalido \n");
      }

  return 0;
}