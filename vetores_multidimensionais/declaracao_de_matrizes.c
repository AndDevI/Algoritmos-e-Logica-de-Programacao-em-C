#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaração da Matriz
  float notas[5] [6], media = 0;
  int i, j; // Declaração dos indices para linha e para a coluna
  
  // Lendo dados para a Matriz
    for (i = 0; i < 5; i++){ // Lendo a informação do Aluno
      for (j = 0; j < 6; j++){ // Lendo informação da Nota
        printf("Digite uma nota %d do aluno %d:", j+1, i+1);
          scanf("%f", &notas[i] [j]);
      }
    }
   // Mostrando os dados armazenados da Matriz
    for (i = 0; i < 5; i++){
       for (j = 0; j < 6; j++){
        printf("Nota %d do aluno %d foi: %.2f \n", j+1, i+1, notas[i] [j]);

          media = media + notas[i] [j];
      }
      media = media / 6;
        printf("A media do aluno foi: %.2f \n\n\n", media);
    }

  return 0;
}