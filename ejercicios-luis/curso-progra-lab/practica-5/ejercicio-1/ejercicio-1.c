#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  float coeficienteA, coeficienteB, coeficienteC, resultado;
  system("clear");

  printf("Escribe el coeficiente A: ");
  scanf("%f", &coeficienteA);
  printf("Escribe el coeficiente B: ");
  scanf("%f", &coeficienteB);
  printf("Escribe el coeficiente C: ");
  scanf("%f", &coeficienteC);

  resultado = (coeficienteC - coeficienteB) / coeficienteA;

  printf("X = %.2f", resultado);
}
