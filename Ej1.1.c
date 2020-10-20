/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 1.1 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

void main () {
  
  long hora, aux;
  int horas, minutos, segundos;

  /* Paso 1. Leer hora */
  printf("Hora: ");
  scanf("%ld", &hora);

  /* Paso 2. Convertir la hora a horas, minutos y segundos */
  aux = hora;
  segundos = aux % 60;
  aux = aux / 60;
  minutos = aux % 60;
  horas = aux / 60;

  /* Paso 3. Mostrar hora convertida */
  printf("\nLa hora %ld convertida da lugar a %d horas, %d minutos y %d segundos.\n", hora, horas, minutos, segundos);
  
}