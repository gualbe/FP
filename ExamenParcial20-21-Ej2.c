/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Examen parcial 2020-21 (Ej. 1)
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 5

int main(void) {
  int v[TAM] = {4, 679, 36, 12, 6};
  int i, j, exito;

  i = 0;
  exito = 0;
  while (i < TAM && !exito) {
    for (j = i + 1; j < TAM; j++) {
      if (v[i] % v[j] == 0) {
        exito = 1;
        printf("Divisor del %d encontrado: %d\n", v[i], v[j]);
      }
    }
    i++;
  }

  return 0;
}