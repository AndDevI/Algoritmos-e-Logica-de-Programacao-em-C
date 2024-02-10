/*
Escreva um programa que leia o ano de nascimento de uma pessoa. Calcular e apresentar a 
idade desta pessoa e a quantidade de dias, de horas, de minutos e a quantidade de segundos 
que esta pessoa vive desde o seu nascimento.
*/ 


#include <stdio.h>
#include <time.h>

int main() {
    // Variáveis para armazenar a entrada do usuário e a data atual
    int anoNascimento;
    int anoAtual;

    // Obter o ano atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    anoAtual = tm.tm_year + 1900;

    // Obter o ano de nascimento do usuário
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Calcular a idade
    int idade = anoAtual - anoNascimento;

    // Calcular o tempo vivido em dias, horas, minutos e segundos
    long diasVividos = idade * 365;  // Supondo 365 dias em um ano
    long horasVividas = diasVividos * 24;
    long minutosVividos = horasVividas * 60;
    long segundosVividos = minutosVividos * 60;

    // Exibir os resultados
    printf("Idade: %d anos\n", idade);
    printf("Dias vividos: %ld dias\n", diasVividos);
    printf("Horas vividas: %ld horas\n", horasVividas);
    printf("Minutos vividos: %ld minutos\n", minutosVividos);
    printf("Segundos vividos: %ld segundos\n", segundosVividos);

    return 0;
}