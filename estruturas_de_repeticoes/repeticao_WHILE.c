#include <stdio.h>
#include <stdlib.h>

int main() {
  int cont;
  
  cont = 0;                      // Inicializaçõo da variavel contadora
  while (cont <= 10) {           // Teste do laço de repetição
    printf("%d \n", cont);
      cont++;                    // Incremento da variável contadores
  }
  
  return 0;
}