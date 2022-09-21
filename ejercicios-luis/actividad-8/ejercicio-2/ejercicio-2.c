#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  char nombre[30];
  int horasSemanales;
  float salarioSemanal, salarioPorHora;

  system("clear");

  printf("Escribe tu nombre: ");
  scanf("%s", &nombre);
  printf("Escribe tus horas trabajadas en la semana: ");
  scanf("%d", &horasSemanales);
  printf("Escribe tu salario semanal: ");
  scanf("%f", &salarioSemanal);

  salarioPorHora = salarioSemanal / horasSemanales;
  system("clear");
  printf("Empleado: %s gana %.2f pesos por hora", nombre, salarioPorHora);
}
