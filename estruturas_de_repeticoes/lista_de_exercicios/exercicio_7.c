#include <stdio.h>
#include <stdlib.h>

/* 
Escreva um programa que controle o acesso de pessoas em um elevador. O elevador permite
a quantidade máxima de 15 pessoas ou 800 Kg, o que ocorrer primeiro. Quando o elevador
estiver lotado deverá informar que está “LOTADO” e informar a quantidade de pessoas que
está transportando e o seu peso total.

Observação: Nenhuma das condições poderá ser ultrapassada, com o perigo do elevador cair. 
*/

int main() {
    int capacidadePessoas = 15;
    float capacidadePesoKg = 800.0;

    int quantidadePessoas = 0;
    float pesoTotalKg = 0.0;

    int opcao;
    float pesoEntrada;

    do {
        // Solicitação e leitura da opção
        printf("Escolha a opção:\n");
        printf("1 - Entrar no elevador\n");
        printf("2 - Sair do elevador\n");
        printf("3 - Encerrar o programa\n");

        scanf("%d", &opcao);

        // Executa a ação com base na opção
        switch (opcao) {
            case 1:
                if (quantidadePessoas < capacidadePessoas && pesoTotalKg < capacidadePesoKg) {
                    printf("Digite o peso da pessoa que está entrando: ");
                    scanf("%f", &pesoEntrada);

                    if (pesoEntrada > 0) {
                        quantidadePessoas++;
                        pesoTotalKg += pesoEntrada;
                        printf("Uma pessoa entrou no elevador com peso de %.2f Kg.\n", pesoEntrada);
                    } else {
                        printf("Peso inválido. Tente novamente.\n");
                    }
               
                } else {
                    printf("Elevador LOTADO! Transportando %d pessoas com um peso total de %.2f Kg.\n", quantidadePessoas, pesoTotalKg);
                }
                  system("pause");
                break;
           
            case 2:
                if (quantidadePessoas > 0) {
                    quantidadePessoas--;
                    printf("Uma pessoa saiu do elevador.\n");
                } else {
                    printf("Elevador vazio, ninguém para sair.\n");
                }
                  system("pause");
                break;
            
            case 3:
                printf("Programa encerrado.\n");
                  system("pause");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);
    return 0;
}
