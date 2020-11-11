/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 7.8
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define NFIL 100
#define NCOL 100

typedef struct {
  float matriz[NFIL][NCOL];
  int nfil, ncol;
} Matriz;

int main() {
  Matriz m1, m2, suma;
  int i, j;

  /* Paso 1. Leer dimensiones de las matrices desde teclado */
  printf("Numero de filas (mismo para ambas matrices): ");
  scanf("%d", &m1.nfil);
  m2.nfil = m1.nfil;
  printf("Numero de columnas (mismo para ambas matrices): ");
  scanf("%d", &m1.ncol);
  m2.ncol = m1.ncol;

  /* Paso 2. Leer elementos de las matrices desde teclado */
  printf("\nElementos de la primera matriz.-\n");
  for (i = 0; i < m1.nfil; i++) {
    for (j = 0; j < m1.ncol; j++) {
      printf("Elemento (%d,%d): ", i, j);
      scanf("%f", &m1.matriz[i][j]);
    }
  }
  printf("\nElementos de la segunda matriz.-\n");
  for (i = 0; i < m2.nfil; i++) {
    for (j = 0; j < m2.ncol; j++) {
      printf("Elemento (%d,%d): ", i, j);
      scanf("%f", &m2.matriz[i][j]);
    }
  }

  /* Paso 3. Calcular la matriz suma */
  suma.nfil = m1.nfil;
  suma.ncol = m1.ncol;
  for (i = 0; i < m1.nfil; i++) {
    for (j = 0; j < m1.ncol; j++) {
      suma.matriz[i][j] = m1.matriz[i][j] + m2.matriz[i][j];
    }
  }

  /* Paso 4. Mostrar la matriz suma */
  printf("\n\nLa matriz suma es:\n");
  for (i = 0; i < suma.nfil; i++) {
    for (j = 0; j < suma.ncol; j++) {
      printf("%.2f\t", suma.matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}