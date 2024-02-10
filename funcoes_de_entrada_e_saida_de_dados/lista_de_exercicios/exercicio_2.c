/*
Escreva um programa que calcule e apresente o valor do volume de uma lata de óleo (a lata 
tem o formato de um cilindro), utilizando a fórmula: “volume = 3.14159 * raio² * altura”. 
Obs.: O programa deve ler os valores das variáveis: raio e altura, armazenar o resultado do 
cálculo na variável volume. 
*/

#include <stdio.h>
#include <stdlib.h>

                  
int main() {
 float raio, altura, volume; 

    printf("Digite o raio da lata:");
      scanf("%f", &raio);

    printf("Digite a altura da lata:");
      scanf("%f", &altura);   

   volume = 3.14159 * (raio * raio) * altura;

    printf("O volume da lata e: %.2f \n",volume); 
  return 0;
}
