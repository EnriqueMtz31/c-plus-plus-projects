#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
  int numPagosEnAnio, numAniosPorPagar;
  float montoDevolver, montoPrestamo, interesAnual = 0.14, intereses, interes, interesesElevados;

  system("clear");

  printf("Escribe el monto del préstamo: ");
  scanf("%f", &montoPrestamo);
  printf("Escribe la cantidad de pagos por año: ");
  scanf("%d", &numPagosEnAnio);
  printf("Escribe la cantidad de años que se estará pagando: ");
  scanf("%d", &numAniosPorPagar);

  interes = (interesAnual / (float)numPagosEnAnio);
  intereses = 1 + interes;
  interesesElevados = pow(intereses, (numPagosEnAnio * numAniosPorPagar));
  montoDevolver = montoPrestamo * interesesElevados;

  system("clear");
  printf("El monto a devolver por el monto de prestamo %.2f es: %.2f", montoPrestamo, montoDevolver);
}
