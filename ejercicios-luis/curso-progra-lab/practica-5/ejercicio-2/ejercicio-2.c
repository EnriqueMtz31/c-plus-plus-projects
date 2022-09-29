#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  int edad;
  float alturaCms, resultado;
  system("clear");

  printf("Escribe tu altura (centímetros): ");
  scanf("%f", &alturaCms);
  printf("Escribe tu edad: ");
  scanf("%d", &edad);

  resultado = 0.9 * (alturaCms - 100 + (edad * 0.1));

  printf("El peso en kilogramos es: %.2f\n", resultado);
}
