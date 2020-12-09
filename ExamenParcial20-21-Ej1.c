/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Examen parcial 2020-21 (Ej. 1)
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

int main() {
  int i, n = 1, primo, primoAnterior = 0, salir = 0;

  while (n != 0 && !salir) {
    printf("Numero: ");
    scanf("%d", &n);
    
    if (n > 0) {
      /* Averiguar si n es primo */
      i = 2;
      primo = 1;
      while (i < n && primo) {
        if (n % i == 0)
          primo = 0;
        else
          i++;
      }
      /* Comprobar que hay dos primos consecutivos */
      if (primo && primoAnterior)
        salir = 1;
      primoAnterior = primo;
    }
  }

  if (salir)
    printf("Dos numeros primos consecutivos.\n");

  return 0;
}