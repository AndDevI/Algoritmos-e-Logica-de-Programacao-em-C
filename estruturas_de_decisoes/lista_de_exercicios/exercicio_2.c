/*
Escreva um programa que leia as quatro notas escolares de um aluno. Calcular e apresentar 
à média. Levando em consideração que a média de aprovação da escola é “6”, informar se o 
aluno foi “APROVADO” ou “REPROVADO”. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[80];
  float nota1, nota2, nota3, nota4, media;

    printf("Digite o nome do aluno:");
      gets(nome);

        fflush(stdin);

    printf("Digite a primeira nota:");
      scanf("%f", &nota1);

    printf("Digite a segunda nota:");
      scanf("%f", &nota2);

    printf("Digite a terceira nota:");
      scanf("%f", &nota3);
    
    printf("Digite a quarta nota:");
      scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 6) {
      printf("O aluno: %s tem a media: %.2f e foi APROVADO \n", nome, media);
    } else {
      printf("O aluno: %s tem a media: %.2f e foi REPROVADO \n", nome, media);
    }
    
  return 0;
}