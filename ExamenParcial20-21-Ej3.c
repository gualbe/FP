/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Examen parcial 2020-21 (Ej. 1)
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define NFIL 4
#define NCOL 3

int main () {

	float m [NFIL][NCOL] = {
		{1.0, 2.0, 5.0},
		{2.0, 3.0, 4.0},
		{3.0, 7.0, 5.0},
		{2.0, 5.0, 8.0}};
  int i, j, maxFil = 0, maxCol = 0, minFil = 0, minCol = 0;
	
	for (i = 0; i < NFIL; i++) {
		for (j = 0; j < NCOL; j++) {
			if (m[i][j] > m[maxFil][maxCol]) {
        maxFil = i;
        maxCol = j;
      }
      if (m[i][j] < m[minFil][minCol]) {
        minFil = i;
        minCol = j;
      }
    }
  }

	printf("Máximo en (%d, %d)\n", maxFil, maxCol);
	printf("Mínimo en (%d, %d)\n", minFil, minCol);

  return 0;
}
