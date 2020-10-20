/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 4.24 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define N 6

int main () {
  
  float v[N], aux;
  int i, j, posMin;

  /* Paso 1. Leer vector del teclado */
  printf("Introduzca los %d elementos del vector.\n", N);
  for (i = 0; i < N; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%f", &v[i]);
  }

  /* Paso 2. Ordenar el vector por el metodo de seleccion */  
  for (i = 0; i < N - 1; i++) {
    /* Paso 2.1. Localizar la posicion del minimo (a partir de i) */ 
    posMin = i;
    for (j = i + 1; j < N; j++) {
      if (v[j] < v[posMin])
        posMin = j;
    }
    /* Paso 2.2. Intercambiar el minimo con el elemento en la posicion i */ 
    if (posMin != i) {
        aux = v[i];
        v[i] = v[posMin];
        v[posMin] = aux;
    }
  }

  /* Paso 3. Mostrar vector ordenado */
  printf("\nEl vector ordenado es: {");
  for (i = 0; i < N - 1; i++) {
    printf("%.2f, ", v[i]);
  }
  printf("%.2f}\n", v[N - 1]);

  return 0;

}

