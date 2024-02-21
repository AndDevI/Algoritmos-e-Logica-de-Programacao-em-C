#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia os valores dos lados de um triângulo. Verificar se os lados
fornecidos formam realmente um triângulo, e se for esta condição verdadeira, deverá ser
indicado qual tipo de triângulo foi formado: isósceles, escaleno ou equilátero.

Observação 1: Triângulo é uma forma geométrica que tem três
lados, e cada lado é menor que a soma dos outros dois lados.
É um triângulo quando A<B+C, quando B<A+C e quando C<A+B.
(Sendo A,B e C os lados de um triângulo).

Observação 2: Depois de verificar e ter certeza que os valores
informados para os três lados formam um triângulo, deverão ser
analisados os valores para estabelecer qual tipo de triângulo será
formado: “isósceles”, “escaleno” ou “equilátero”.

Observação 3: Um triângulo é “isósceles” quando possui dois
lados iguais e um diferente, (A=B ou A=C ou B=C); é “escaleno”
quando possui todos os lados diferentes, (A != B e B != C) e é
“equilátero” quando possui todos os lados iguais, (A=B e B=C).
*/


int main() {
    float ladoA, ladoB, ladoC;

      printf("Digite o comprimento do lado A: ");
        scanf("%f", &ladoA);

      printf("Digite o comprimento do lado B: ");
        scanf("%f", &ladoB);

      printf("Digite o comprimento do lado C: ");
        scanf("%f", &ladoC);
      

      if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
          printf("O triangulo e equilatero. \n");
        }  else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("O triangulo e isosceles. \n");
        }    else {
              printf("O triangulo escaleno. \n");
        }
      } else {
         printf("Os lados fornecidos nao formam um triangulo \n");
      }
      
  return 0;
}