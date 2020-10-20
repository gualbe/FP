/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 4.34 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define N 4

int main () {
  
  float m[N][N];
  int i, j, k, l, exito;

  /* Paso 1. Leer matriz del teclado */
  printf("Introduzca los %dx%d elementos de la matriz.\n", N, N);
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("Elemento (%d,%d): ", i + 1, j + 1);
      scanf("%f", &m[i][j]);
    }
  }

  /* Paso 2. Buscar si el producto de dos elementos de la diagonal principal se encuentra en alguna posición fuera de la diagonal principal */ 

  /* Paso 2.1. Recorrer todos los pares posibles de elementos de la diagonal principal */ 
  i = 0;
  exito = 0;
  while (i < N - 1 && !exito) {
    j = i + 1;
    while (j < N && !exito) {
      /* Paso 2.2. Comprobar si el producto entre los elementos m[i][i] y m[j][j] se encuentra en alguna posición fuera de la diagonal principal */ 
      k = 0;
      while (k < N && !exito) {
        l = 0;
        while (l < N && !exito) {
          if (k != l && m[i][i] * m[j][j] == m[k][l])
            exito = 1;
          else
            l++;
        }
        if (!exito)
          k++;
      }
      if (!exito)
        j++;
    }
    if (!exito)
      i++;
  }

  /* Paso 3. Mostrar resultados */
  if (exito) {
    printf("\nSe ha encontrado que m[%d][%d] * m[%d][%d] = %f y dicho valor se encuentra en el elemento m[%d][%d] de la matriz.\n", i, i, j, j, m[i][i] * m[j][j], k, l);
  }
  else {
    printf("\nNo se han encontrado resultados.\n");
  }

  /* Paso 4. Mostrar matriz */
  printf("\nLa matriz es:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%.2f\t", m[i][j]);
    }
    printf("\n");
  }

  return 0;

}

