#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  int numPagosEnAnio, numAniosPorPagar;
  float montoDevolver, montoPrestamo, interesAnual = 0.14, intereses;

  system("clear");

  printf("Escribe el monto del préstamo: ");
  scanf("%f", &montoPrestamo);
  printf("Escribe la cantidad de pagos por año: ");
  scanf("%d", &numPagosEnAnio);
  printf("Escribe la cantidad de años que se estará pagando: ");
  scanf("%d", &numAniosPorPagar);

  intereses = 1 + (interesAnual / (float)numPagosEnAnio);
  montoDevolver = montoPrestamo * pow(intereses, (numPagosEnAnio * numAniosPorPagar));

  system("clear");
  printf("El monto a devolver es: %.2f. Intereses %f", montoDevolver, intereses);
}
