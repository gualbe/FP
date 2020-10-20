/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 3.19 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

int main () {
  
  int a, b, i, d, exito, esPrimo;

  /* Paso 1. Leer a y b */
  printf("Introduzca a y b: ");
  scanf("%d%d", &a, &b);

  /* Paso 2. Buscar primer primo entre a y b */
  i = a;
  exito = 0;
  while (i <= b && !exito) {
    d = 2;
    esPrimo = 1;
    while (d < i && esPrimo) {
      if (i % d == 0)
        esPrimo = 0;
      else
        d++; 
    }
    if (esPrimo)
      exito = 1;
    else
      i++;
  }

  /* Paso 3. Mostrar primer primo (si se ha encontrado) */
  if (exito)
    printf("\nSe ha encontrado el primo %d.\n", i);
  else
    printf("\nNo se ha encontrado ningun primo.\n");

  return 0;

}

