/*
Escreva um programa que leia o valor do salário hora, a quantidade de horas trabalhadas e a 
quantidade de filhos menores de 14 anos de um funcionário. Calcular o valor do salário bruto. 
Para calcular o valor do salário família leve em consideração o seguinte: 

Salário até R$ 700,00 | R$ 9,50 para cada filho 
Salário acima de R$ 700,00 até R$ 1.000,00 | R$ 6,60 para cada filho 
Salário acima de R$ 1.000,00 | R$ 1,50 para cada filho 

No final apresentar: 
- O valor do salário bruto
- O valor do salário família
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioHora, horasTrabalhadas, salarioBruto, salarioFamilia;
    int filhos;

    printf("Digite o valor do salário por hora: ");
    scanf("%f", &salarioHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite a quantidade de filhos menores de 14 anos: ");
    scanf("%d", &filhos);

    salarioBruto = salarioHora * horasTrabalhadas;

    if (salarioBruto <= 700) {
        salarioFamilia = 9.5 * filhos;
    } else if (salarioBruto <= 1000) {
        salarioFamilia = 6.6 * filhos;
    } else {
        salarioFamilia = 1.5 * filhos;
    }

    printf("Valor do salário bruto: R$%.2f\n", salarioBruto);
    printf("Valor do salário família: R$%.2f\n", salarioFamilia);

    return 0;
}
