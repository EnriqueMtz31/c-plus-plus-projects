#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  float ladoA, ladoB, ladoC, semiPerimetro, area;

  system("clear");

  printf("Escribe lado A: ");
  scanf("%f", &ladoA);
  printf("Escribe lado B: ");
  scanf("%f", &ladoB);
  printf("Escribe lado C: ");
  scanf("%f", &ladoC);

  semiPerimetro = (ladoA + ladoB + ladoC) / 2;
  area = sqrt(semiPerimetro * (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC));

  system("clear");
  printf("El área del triángulo con lados A: %.2f, B: %.2f, C: %.2f es igual a: %.2f", ladoA, ladoB, ladoC, area);
}
