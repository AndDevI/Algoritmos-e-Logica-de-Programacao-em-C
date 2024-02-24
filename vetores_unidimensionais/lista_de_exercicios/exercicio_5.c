/*
Escreva um programa que armazene o valor das temperaturas mínimas e máximas ocorridas 
em uma cidade, no período de 30 dias. No final apresentar o dia que ocorreu a menor 
temperatura e qual foi ela. Apresentar também o dia que ocorreu a maior temperatura e 
qual foi ela. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int temperaturasMinimas[30], temperaturasMaximas[30];
    int menorTemperatura, maiorTemperatura, diaMenor, diaMaior;
    int i;

    for (i = 0; i < 30; i++) {
        printf("Digite a temperatura minima para o dia %d: ", i + 1);
          scanf("%d", &temperaturasMinimas[i]);

        printf("Digite a temperatura maxima para o dia %d: ", i + 1);
          scanf("%d", &temperaturasMaximas[i]);
    }

    // Inicializa as variáveis de menor e maior temperatura com os valores do primeiro dia
    menorTemperatura = temperaturasMinimas[0];
    maiorTemperatura = temperaturasMaximas[0];
    diaMenor = 1;
    diaMaior = 1;

    // Encontra o dia da menor e maior temperatura
    for (i = 1; i < 30; i++) {
        if (temperaturasMinimas[i] < menorTemperatura) {
            menorTemperatura = temperaturasMinimas[i];
            diaMenor = i + 1;
        }

        if (temperaturasMaximas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturasMaximas[i];
            diaMaior = i + 1;
        }
    }

    // Apresenta os resultados
    printf("Menor temperatura ocorreu no dia %d e foi: %d graus\n", diaMenor, menorTemperatura);
    printf("Maior temperatura ocorreu no dia %d e foi: %d graus\n", diaMaior, maiorTemperatura);

    return 0;
}
