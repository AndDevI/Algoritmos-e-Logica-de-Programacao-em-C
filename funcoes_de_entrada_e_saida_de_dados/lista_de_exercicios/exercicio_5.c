/*
Escreva um programa que leia e armazene a receita e a despesa anual de uma empresa. 
Calcular e apresentar o lucro obtido pela empresa. Obs.: Receita de uma empresa é o 
dinheiro que a empresa recebe quando fornece um produto ou serviço. Despesa é todo e 
qualquer valor que a empresa paga a fornecedores. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis para armazenar receita, despesa e lucro
    float receita, despesa, lucro;

    // Solicitação e leitura da receita anual
    printf("Digite a receita anual da empresa: ");
      scanf("%f", &receita);

    // Solicitação e leitura da despesa anual
    printf("Digite a despesa anual da empresa: ");
      scanf("%f", &despesa);

    // Cálculo do lucro
    lucro = receita - despesa;

    printf("A empresa obteve um lucro de R$%.2f.\n", lucro);

    return 0;
}