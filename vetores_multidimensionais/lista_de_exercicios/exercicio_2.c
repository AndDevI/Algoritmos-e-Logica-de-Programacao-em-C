/*
Escreva um programa que leia uma matriz A de duas dimensões com 6 linhas e 6 colunas.
Apresentar o somatório dos elementos que estão na diagonal principal (A[0,0], A[1,1], A[2,2],
A[3,3], A[4,4], A[5,5]).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrizA[6][6];
    int i, j, somatorioDiagonal = 0;

    printf("Digite os elementos da matriz A (6x6):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        somatorioDiagonal += matrizA[i][i];
    }

    printf("\nSomatorio dos elementos da diagonal principal: %d\n", somatorioDiagonal);

    return 0;
}
