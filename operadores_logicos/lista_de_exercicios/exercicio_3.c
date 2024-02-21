#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o valor do Coeficiente de Inteligência de uma pessoa. Escrever
uma mensagem informando qual é a sua condição mental, baseando-se nos dados abaixo:

[000, 030) - Acéfalo
[030, 050) - Débil mental
[050, 070) - Regular
[070, 100) - Normal
[100, 150) - Gênio

Qualquer outro valor digitado deverá ser informado a mensagem: “Valor digitado errado”
*/

int main() {
    int numero;

    printf("Digite um numero:");
      scanf("%d", &numero);

    if (numero >= 0 && numero < 30) {
      printf("O Coeficiente de Inteligencia e ACEFALO \n");
    } else if (numero >= 30 && numero < 50) {
        printf("O Coeficiente de Inteligencia e DEBIL MENTAL \n");
    } else if (numero >= 50 && numero < 70) {
        printf("O Coeficiente de Inteligencia e REGULAR \n");
    } else if (numero >= 70 && numero < 100) {
        printf("O Coeficiente de Inteligencia e NORMAL \n");
    } else if (numero >= 100 && numero < 150) {
        printf("O Coeficiente de Inteligencia e GENIO \n");
    } else {
        printf("Valor digitado errado \n");
    }
    
  
  return 0;
}