/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 5.11 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define NFIL 100
#define NCOL 100

int filaSumaIgual (int m[NFIL][NCOL], int nfil, int ncol);

int main () {
  
  int m[NFIL][NCOL];
  int i, j, res;

  /* Paso 1. Leer matriz del teclado */
  printf("Introduzca las dimensiones de la matriz: ");
  scanf("%d%d", &nfil, &ncol);
  printf("Introduzca los %dx%d elementos de la matriz.\n", nfil, ncol);
  for (i = 0; i < nfil; i++) {
    for (j = 0; j < ncol; j++) {
      printf("Elemento (%d,%d): ", i + 1, j + 1);
      scanf("%d", &m[i][j]);
    }
  }

  /* Paso 2. Buscar si alguna fila de la matriz suma igual que la diagonal secundaria, usando la funcion */ 
  res = filaSumaIgual(m, nfil, ncol);

  /* Paso 3. Mostrar el resultado de la busqueda */
  if (res)
    printf("\nSe");
  else 
    printf("\nNo se");
  printf(" ha encontrado una fila de la matriz que suma igual que la diagonal secundaria.\n");

  /* Paso 4. Mostrar matriz */
  printf("\nLa matriz es:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }

  return 0;

}

int filaSumaIgual (int m[NFIL][NCOL], int nfil, int ncol) {
  int i, j, n, suma, sumaDiagSec, exito;

  /* Paso 1. Calcular la suma de la diagonal principal */
  if (nfil > ncol)
    n = ncol;
  else
    n = nfil;
  sumaDiagSec = 0;
  for (i = 0; i < n; i++) {
    sumaDiagSec += m[i][ncol - i - 1];
  }

  /* Paso 2. Buscar fila que suma igual que sumaDiagSec */
  exito = 0;
  i = 0;
  while (i < nfil && !exito) {
    /* Paso 2.1. Sumar elementos de la fila i (mientras la suma no exceda sumaDiagSec) */
    suma = 0;
    j = 0;
    while (j < ncol && suma < sumaDiagSec) {
      suma += m[i][j];
      j++;
    }
    if (suma == sumaDiagSec)
      exito = 1;
    else
      i++;
  }

  return exito;
}
