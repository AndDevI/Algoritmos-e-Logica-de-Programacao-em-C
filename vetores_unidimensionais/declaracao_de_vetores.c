/* 
Vetores são variáveis agrupadas sob um mesmo nome e que tenham o mesmo tipo de dado 
e mesmo tipo de informação.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaração de vetores
  float notas[6], media = 0;
  int i;
  
  // Lendo dados para um vetor
    for (i = 0; i < 6; i++){
      printf("Digite uma nota %d:", i+1);
        scanf("%f", &notas[i]);
      
      media = media + notas[i]; // Somando as notas
    }
    
    media = media / 6; // Calculando a media

    // Mostrando os dados armazenados em um vetor
    for (i = 0; i < 6; i++){
      printf("Nota %d: %.2f \n", i+1, notas[i]);
    }
  
    printf("A media do aluno foi: %.2f \n", media);

  return 0;
}