/*
Escreva um programa que leia duas matrizes A e B numéricas, cada uma com duas dimensões
de 5 linhas e 3 colunas. Criar uma matriz C de mesma dimensão, 5 linhas e 3 colunas, que
deverá ser formada pela soma dos elementos da matriz A com os elementos da matriz B. No
final apresentar a matriz C.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrizA[5][3], matrizB[5][3], matrizC[5][3];
    int i, j;

    printf("Digite os elementos da matriz A (5x3):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B (5x3):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMatriz C (Soma de A e B):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
