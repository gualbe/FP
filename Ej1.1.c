#include <stdio.h>

void main () {
  int hora;
  int horas, minutos, segundos;
  int aux;

  /* Paso 1. Leer hora */
  printf("Hora: ");
  scanf("%d", &hora);

  /* Paso 2. Convertir la hora a horas, minutos y segundos */
  aux = hora;
  segundos = aux % 60;
  aux = aux / 60;
  minutos = aux % 60;
  horas = aux / 60;

  /* Paso 3. Mostrar hora convertida */
  printf("\nLa hora %d convertida da lugar a %d horas, % minutos y %d segundos.\n", hora, horas, minutos, segundos);
  
}