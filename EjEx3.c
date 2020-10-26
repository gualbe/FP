#include <stdio.h>

#define TAM 3

int numPerfecto(int n);

int main () {
  int mat[TAM][TAM] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int i, col, fil, enc = 0, numPerf;

  printf("Introduzca la posicion de la fila y la columna\n");
  scanf("%d%d", &fil, &col);

  if (fil > TAM || col > TAM)
    printf("Posicion erronea\n");
  else {
    i = 0;
    while(i < TAM && !enc) {
      if (numPerfecto(mat[i][col])) { /* Numero perfecto por columna */
        enc = 1;
        numPerf = mat[i][col];
      } else if(numPerfecto(mat[fil][i])) { /* Numero perfecto por fila */
        enc = 1;
        numPerf = mat[fil][i];
      }
      i++;
    }

    if (enc == 0)
      printf("No hay numeros perfectos en la columna ni en la fila indicadas\n");
    else
      printf("Se ha encontrado el numero perfecto %d\n", numPerf);
  }
}

int numPerfecto (int n) {
  int suma, i;

  i = 1;
  suma = 0;
  while(i < n) {
		if(n % i == 0) {
			suma += i;
		}
		i++;
	}

  return suma == n;
}

