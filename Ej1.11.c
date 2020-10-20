/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 1.11 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
  int a, b, numero;

  /* Paso 1. Inicializar secuencia aleatoria */
  srand(time(NULL));

  /* Paso 2. Pedir a y b */
  printf("Introduzca a y b: ");
  scanf("%d%d", &a, &b);

  /* Paso 3. Obtener numero aleatorio */
  numero = a + rand() % (b - a + 1);

  /* Paso 4. Mostrar el numero aleatorio */
  printf("\nNumero aleatorio: %d\n", numero);
  
  return 0;
  
}
