/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 2.7 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

int main () {
  
  int h1, m1, s1;
  int h2, m2, s2;
  int h3, m3, s3;
  long segs1, segs2, diferenciaSegs, aux;

  /* Paso 1. Leer las dos horas */
  printf("Primera hora (h m s): ");
  scanf("%d%d%d", &h1, &m1, &s1);
  printf("Segunda hora (h m s): ");
  scanf("%d%d%d", &h2, &m2, &s2);

  /* Paso 2. Calcular numero de segundos de cada hora */
  segs1 = h1 * 3600 + m1 * 60 + s1;
  segs2 = h2 * 3600 + m2 * 60 + s2;

  /* Paso 3. Calcular diferencia de segundos entre ambas horas */
  diferenciaSegs = segs2 - segs1;

  /* Paso 4. Convertir diferencia en horas, minutos y segundos */
  aux = diferenciaSegs;
  s3 = aux % 60;
  aux = aux / 60;
  m3 = aux % 60;
  h3 = aux / 60;  

  /* Paso 5. Mostrar las horas, minutos y segundos resultantes */
  printf("\nResultado: %d horas, %d minutos y %d segundos.\n", h3, m3, s3);

  return 0;

}

