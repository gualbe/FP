/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 7.5
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 100

typedef struct {
   int dia, mes, anyo;
} Fecha;

typedef struct {
   int edad;
   float altura, peso;
   char nombre[TAM];
   char sexo;
   Fecha nacimiento;
} Persona;

typedef struct {
  Persona personas[TAM];
  int numPersonas;
} Familia;

int main() {
  Familia familia;
  int i;

  /* Paso 1. Leer familia desde teclado */
  printf("Numero de familiares: ");
  scanf("%d", &familia.numPersonas);
  for (i = 0; i < familia.numPersonas; i++) {
    printf("Nombre %d: ", i + 1);
    scanf("%s", familia.personas[i].nombre);
    printf("Edad %d: ", i + 1);
    scanf("%d", &familia.personas[i].edad);
    printf("Altura %d: ", i + 1);
    scanf("%f", &familia.personas[i].altura);
    printf("Peso %d: ", i + 1);
    scanf("%f", &familia.personas[i].peso);
    printf("Sexo (H/M) %d: ", i + 1);
    fflush(stdin);
    scanf("%c", &familia.personas[i].sexo);
    printf("Dia nacimiento %d: ", i + 1);
    scanf("%d", &familia.personas[i].nacimiento.dia);
    printf("Mes nacimiento %d: ", i + 1);
    scanf("%d", &familia.personas[i].nacimiento.mes);
    printf("Año nacimiento %d: ", i + 1);
    scanf("%d", &familia.personas[i].nacimiento.anyo);
  }

  /* Paso 2. Imprimir la familia por pantalla */
  printf("\n\nFamilia de %d miembros.\n\n", familia.numPersonas);
  printf("Nombre\tEdad\tAltura\t\tPeso\tSexo\t\tNacimiento\n");
  for (i = 0; i < familia.numPersonas; i++) {
    printf("%s\t%d\t\t%f\t%f\t%c\t%d/%d/%d\n",
           familia.personas[i].nombre, familia.personas[i].edad, familia.personas[i].altura, familia.personas[i].peso, familia.personas[i].sexo, familia.personas[i].nacimiento.dia, familia.personas[i].nacimiento.mes, familia.personas[i].nacimiento.anyo);
  }

  return 0;
}