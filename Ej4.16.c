/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 4.16 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 100

int main () {
  
  float v [TAM];
  int i, n, exito;

  /* Paso 1. Leer vector del teclado */
  printf("Introduzca el numero de elementos del vector: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%f", &v[i]);
  }

  /* Paso 2. Comprobar si el vector esta ordenado ascendentemente */
  i = 1;
  exito = 1;
  while (i < n && exito) {    
    if (v[i] < v[i-1])
      exito = 0;
    else
      i++;
  }

  /* Paso 3. Indicar por pantalla si el vector esta ordenado */
  if (exito)
    printf("\nEl vector esta ordenado ascendentemente.\n");
  else
    printf("\nEl vector no esta ordenado ascendentemente.\n");

  return 0;

}

