#include <stdio.h>
#include <stdlib.h>

                   /*|Lendo dados numéricos|*/
int main() {
  int valorA, valorB, resultado;      /*|Declaração de variáveis|*/

    printf("Digite um valor:");         /*|Entrada de dados|*/
      scanf("%d", &valorA);    /*|%d = ler inteiros | & = identificar a variavel|*/
                                               
    printf("Digite outro valor:");
      scanf("%d", &valorB);

    resultado = valorA + valorB;  /*|Processamento de dados|*/

    printf("Resultado: %d \n",resultado);  /*|Saída de dados|*/
    printf("%d + %d = %d\n", valorA, valorB, resultado);   /*|Mostrar valores digitados pelo o usuario|*/
  return 0;
}

