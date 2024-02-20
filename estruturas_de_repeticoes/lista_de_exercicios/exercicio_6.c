#include <stdio.h>
#include <stdlib.h>

/*  Escreva um programa que controle o acesso de pessoas em um restaurante. O restaurante
tem uma capacidade de 40 vagas, que não poderá ser ultrapassada. O controle será feito
através de códigos, conforme a tabela abaixo:

0 – Encerrar o programa
1 – Entrar uma pessoa no restaurante
2 – Sair uma pessoa do restaurante
3 – Mostrar quantos lugares estão disponíveis
4 – Mostrar o total de pessoas que entraram
5 – Mostrar o total de pessoas que saíram

Qualquer outro código escrever que o código é inválido. Uma observação: Não poderá sair
uma pessoa e ficar a quantidade de lugares disponíveis negativa.

Observação: Não pode sair uma pessoa se não existir ninguém dentro do restaurante, ou seja,
a quantidade de lugares disponíveis não pode ficar negativa */

int main() {
    int capacidade = 40;
    int lugaresDisponiveis = capacidade;
    int totalEntradas = 0, totalSaidas = 0;
    int codigo;

    do {
        // Solicitação e leitura do código
        printf("Menu de opcoes: \n");
        
        printf("0 - Encerrar o programa \n");
        printf("1 - Entrar uma pessoa no restaurante \n");
        printf("2 - Sair uma pessoa do restaurante \n");
        printf("3 - Mostrar quantos lugares estão disponíveis \n");
        printf("4 - Mostrar o total de pessoas que entraram \n");
        printf("5 - Mostrar o total de pessoas que saíram \n");

        printf("Digite o codigo (0 a 5): ");
        scanf("%d", &codigo);

        // Executa a ação com base no código
        switch (codigo) {
            case 0:
                printf("Programa encerrado.\n");
                break;
            
            case 1:
                if (lugaresDisponiveis > 0) {
                    lugaresDisponiveis--;
                    totalEntradas++;
                    printf("Uma pessoa entrou no restaurante.\n");
                } else {
                    printf("Não há lugares disponíveis.\n");
                }
                  system("pause");
                break;
              
            case 2:
                if (lugaresDisponiveis < capacidade) {
                    lugaresDisponiveis++;
                    totalSaidas++;
                    printf("Uma pessoa saiu do restaurante.\n");
                } else {
                    printf("Não há pessoas dentro do restaurante.\n");
                }
                 system("pause");
                break;
              
            case 3:
                printf("Lugares disponíveis: %d\n", lugaresDisponiveis);
                  system("pause");
                break;
              
            case 4:
                printf("Total de pessoas que entraram: %d\n", totalEntradas);
                  system("pause");
                break;
              
            case 5:
                printf("Total de pessoas que saíram: %d\n", totalSaidas);
                  system("pause");
                break;
              
            default:
                printf("Código inválido.\n");
                  system("pause");
        }

    } while (codigo != 0);

    return 0;
}
