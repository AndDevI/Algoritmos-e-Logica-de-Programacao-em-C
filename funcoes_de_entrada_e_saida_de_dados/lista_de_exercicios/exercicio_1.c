/*
| A quilometragem inicial de um carro é 200000. Depois de uma viagem, a quilometragem final 
do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando 
em variáveis, depois calcular e armazenar a distância percorrida do carro e finalmente 
apresentá-la. |
*/

#include <stdio.h>
#include <stdlib.h>

                  
int main() {
  int kmInicial, kmFinal, total;    

    printf("Digite a quilometragem inicial:");        
      scanf("%d", &kmInicial);    
                                               
    printf("Digite a quilometragrem final:");
      scanf("%d", &kmFinal);

    total = kmFinal - kmInicial;  

    printf("A quilometragem pecorrida foi: %d \n",total); 
    printf("%d + %d = %d\n", kmInicial, kmFinal, total);   
  return 0;
}
