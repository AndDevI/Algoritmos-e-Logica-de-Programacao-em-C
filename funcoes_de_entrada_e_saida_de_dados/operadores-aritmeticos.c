#include <stdio.h>
#include <stdlib.h>

int main() {
  int valorA, valorB;      /*|Declaração de variáveis|*/
  int somar, subtrair, multiplicar, dividir, resto;
    
    printf("Digite o primeiro valor:");         /*|Entrada de dados|*/
      scanf("%d", &valorA);    /*|%d = ler inteiros | & = identificar a variavel|*/
                                               
    printf("Digite outro valor:");
      scanf("%d", &valorB);

    somar = valorA + valorB;  /*|Processamento de dados|*/
    subtrair = valorA - valorB;
    multiplicar = valorA * valorB;
    dividir = valorA / valorB;
    resto = valorA % valorB;

    printf("A soma foi: %d \n",somar);  /*|Saída de dados|*/
    printf("A diferença foi: %d \n",subtrair);
    printf("O produto foi: %d \n",multiplicar);
    printf("O quociente foi: %d \n",dividir);
    printf("O resto foi: %d \n",resto);
  return 0;
}