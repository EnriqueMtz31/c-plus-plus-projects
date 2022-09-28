#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  float lados, ladoA, ladoB, ladoC, semiPerimetro, area, semiperimetroA, semiperimetroB, semiperimetroC, semiperimetros;

  system("clear");

  printf("Escribe lado A: ");
  scanf("%f", &ladoA);
  printf("Escribe lado B: ");
  scanf("%f", &ladoB);
  printf("Escribe lado C: ");
  scanf("%f", &ladoC);

  lados = (ladoA + ladoB + ladoC);
  semiPerimetro = lados / 2;
  semiperimetroA = (semiPerimetro - ladoA);
  semiperimetroB = (semiPerimetro - ladoB);
  semiperimetroC = (semiPerimetro - ladoC);
  semiperimetros = semiPerimetro * semiperimetroA * semiperimetroB * semiperimetroC;
  area = sqrt(semiperimetros);

  printf("El área del triángulo con lados A: %.2f, B: %.2f, C: %.2f es igual a: %.2f\n", ladoA, ladoB, ladoC, area);
}
