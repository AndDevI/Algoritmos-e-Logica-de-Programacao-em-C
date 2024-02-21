#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia as coordenadas de um ponto no plano (x,y) e escreva o
quadrante ao qual pertence o ponto no plano.

Lembre-se:
Para estar no primeiro quadrante: “x” e “y” são positivos.
No segundo quadrante “x” é negativo e “y” é positivo.
No terceiro quadrante nem “x” e nem “y” são positivos.
No quarto quadrante “x” é positivo e “y” é negativo.
*/


int main() {
  float x, y;

    printf("Digite a coordenada x: \n");
      scanf("%f", &x);
    
    printf("Digite a coordenada y: \n");
      scanf("%f", &y);

    
    if (x > 0 && y > 0) {
      printf("O ponto (%.2f, %.2f) esta no primeiro quadrante.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) esta no segundo quadrante.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) esta no terceiro quadrante.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) esta no quarto quadrante.\n", x, y);
    } else {
        printf("O ponto (%.2f, %.2f) esta sobre um eixo ou no ponto de origem.\n", x, y);
    }
 
  return 0;
}