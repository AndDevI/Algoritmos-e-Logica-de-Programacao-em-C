#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o nome e as três notas escolares de um aluno. Calcular a média
do aluno e apresentar o conceito do aluno baseado na informação abaixo:
[10, 09]- Plenamente satisfatório
(09, 06]- Satisfatório
(06, 04]- Recuperação
(04, 00]- Reprovado
*/

int main() {
    char nome[80];
    float nota1, nota2, nota3, media;

      printf("Digite o nome do aluno:");
        gets(nome);

          fflush(stdin);

      printf("Digite a primeira nota:");
        scanf("%f", &nota1);
      
      printf("Digite a segunda nota:");
        scanf("%f", &nota2);
      
      printf("Digite a terceira nota:");
        scanf("%f", &nota3);
      
     
     media = (nota1 + nota2 + nota3) / 3;


    if (media >= 0 && media < 4) {
      printf("O aluno: %s tem a media: %.2f e foi REPROVADO\n", nome, media);
    } else if (media >= 4 && media < 6) {
        printf("O aluno: %s tem a media: %.2f esta em RECUPERACAO \n", nome, media);
    } else if (media >= 6 && media < 9) {
        printf("O aluno: %s tem a media: %.2f esta SATISFATORIO \n", nome, media);
    } else if (media >= 9 && media < 10) {
        printf("O aluno: %s tem a media: %.2f esta PLENAMENTE SATISFATORIO \n", nome, media);
    } else {
        printf("O aluno: %s tem a media: %.2f esta APROVADO \n", nome, media);
    }
  
  return 0;
}