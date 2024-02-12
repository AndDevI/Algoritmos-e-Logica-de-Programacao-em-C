/*
Escreva um programa que leia o valor do salário bruto de uma pessoa. Calcular o desconto 
de INSS levando em consideração o seguinte: 

Salário até R$ 1.317,07  | 8% 
Salário acima de R$ 1.317,07 até R$ 2.195,12  | 9% 
Salário acima de R$ 2.195,12  | 11% 

O limite máximo de desconto de INSS será de R$ 482,93, portanto você deve levar em 
consideração este valor máximo. 

No final apresentar: 
- O valor do salário bruto; 
- A taxa de INSS; 
- O valor de desconto de INSS; 
- O valor do salário líquido.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float salBruto, inss, salLiquido;

    // Solicitação e leitura do salário bruto
    printf("Digite o valor do salário bruto: ");
    scanf("%f", &salBruto);

    // Calcula o desconto de INSS
    if (salBruto <= 1317.07) {
        inss = salBruto * 0.08;
    } else if (salBruto <= 2195.12) {
        inss = salBruto * 0.09;
    } else {
        inss = salBruto * 0.11;
    }

    // Limita o desconto de INSS ao valor máximo de R$ 482,93
    inss = (inss > 482.93) ? 482.93 : inss;

    // Calcula o salário líquido
    salLiquido = salBruto - inss;

    // Apresenta os resultados
    printf("Valor do salário bruto: R$%.2f\n", salBruto);
    printf("Taxa de INSS: %.2f%%\n", (inss / salBruto) * 100);
    printf("Valor do desconto de INSS: R$%.2f\n", inss);
    printf("Valor do salário líquido: R$%.2f\n", salLiquido);

    return 0;
}