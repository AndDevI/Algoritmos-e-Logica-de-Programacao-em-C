/*
Escreva um programa que leia um vetor A com 20 elementos numéricos inteiros. Construir
um vetor B onde cada elemento de B é o quadrado do elemento correspondente de A.
Apresentar os vetores no final.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetorA[6], vetorB[6], i;
  
    for (i = 0; i < 6; i++){
      printf("Digite um numero %d: \n", i+1);
        scanf("%d", &vetorA[i]);
      
      vetorB[i] = vetorA[i] * vetorA[i]; 
    }
    
    for (i = 0; i < 6; i++){
      printf("O quadrado do numero %d e %d: \n", vetorA[i], vetorB[i]);
    }

  return 0;
}
