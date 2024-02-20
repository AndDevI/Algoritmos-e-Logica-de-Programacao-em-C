#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que mostre na tela os números de 0 até 20

int main() {
  int cont;
  
  cont = 0;                      
  while (cont <= 20) {           
    printf("%d \n", cont);
      cont++;                   
  }
  
  return 0;
}