#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  char nombre[30];
  char genero[20];
  int edad;
  float estatura, peso, imc;

  system("clear");

  printf("Escribe tu nombre: ");
  scanf("%s", &nombre);
  printf("Escribe tu edad: ");
  scanf("%d", &edad);
  printf("Escribe tu genero: ");
  scanf("%s", &genero);
  printf("Escribe tu estatura: ");
  scanf("%f", &estatura);
  printf("Escribe tu peso: ");
  scanf("%f", &peso);

  imc = peso / pow(estatura, 2);

  printf("                                      PACIENTE\n");
  printf("************************************************************************************\n");
  printf("NOMBRE = ");
  puts(nombre);
  printf("EDAD = %d\n", edad);
  printf("GENERO = ");
  puts(genero);
  printf("ESTATURA = %.2f\n", estatura);
  printf("PESO = %.2f\n", peso);
  printf("IMC = %.2f", imc);
  printf("\n************************************************************************************");
}
