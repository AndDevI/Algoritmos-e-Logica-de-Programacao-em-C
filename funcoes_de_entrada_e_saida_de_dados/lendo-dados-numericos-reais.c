#include <stdio.h>
#include <stdlib.h>

int main() {
  float valorA, valorB, media;

    printf("Digite o primeiro valor:");
      scanf("%f", &valorA);

    printf("Digite outro valor:");
      scanf("%f", &valorB);

    media = (valorA + valorB) / 2;

    printf("A media foi: %f \n", media);
  return 0;
}