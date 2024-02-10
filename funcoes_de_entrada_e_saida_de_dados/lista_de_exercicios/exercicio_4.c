/*
Escreva um programa que leia o nome as cinco notas escolares de um aluno. Calcule a média 
do aluno e armazene em uma variável, depois apresente o nome do aluno e a sua média.
*/  
#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[80];
  float nota1, nota2, nota3, nota4, nota5, media;

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

    
    printf("Digite a quinta nota:");
      scanf("%f", &nota5);
    
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 3;

    printf("O aluno: %s tem a media: %.2f \n", nome, media);
  return 0;
}