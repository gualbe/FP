/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Examen parcial 2020-21 (Ej. 1)
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define N 3

void obtenerDiagonal (int t[N][N], int d, int v[N]);

int main() {
  int m [N][N] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
  int diagonal [N];
  int i;

  obtenerDiagonal(m, 1, diagonal);

  printf("La diagonal es: {");
  for (i = 0; i < N - 1; i++) {
    printf("%d, ", diagonal[i]);
  }
  printf("%d}\n", diagonal[N-1]);

  return 0;
}

void obtenerDiagonal (int t[N][N], int d, int v[N]) {
  int i;

  if (d == 1) { /* Diagonal principal */
    for (i = 0; i < N; i++) {
      v[i] = t[i][i];
    }
  } else if (d == -1) { /* Diagonal secundaria invertida */
    for (i = 0; i < N; i++) {
      v[i] = t[N - 1 -i][i];
    }
  } else {
    printf("El valor de d tiene que ser 1 o -1.\n");
  }
}