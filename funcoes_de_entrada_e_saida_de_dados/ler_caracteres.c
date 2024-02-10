#include <stdio.h>
#include <stdlib.h>

int main() {
  char letra;      /*|Declaração de variáveis|*/
  char nome[80];  /*|Armazenar mais de 1 letra| String*/
    
    printf("Digite uma letra:");         /*|Entrada de dados|*/
      scanf("%c", &letra);    

        fflush(stdin);   /*|limpar o buffer do teclado|*/

    printf("Digite um nome:");         /*|Entrada de dados|*/
      gets(nome);     

    printf("Letra digitada: %c \n",letra);  /*|Saída de dados|*/
    printf("Nome digitado: %s \n",nome);
  return 0;
}