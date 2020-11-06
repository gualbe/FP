/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 6.8
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 100

void suprimePrimos (int v[TAM], int * tam);
void suprimeElemento (int v[TAM], int * tam, int pos);
int esPrimo (int n);

int main() {
  int vector [TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i, n = 10;

  /* Paso 1. Suprimir numeros primos del vector */
  suprimePrimos(vector, &n);

  /* Paso 2. Mostrar vector resultante */
  printf("{");
  for (i = 0; i < n - 1; i++) {
    printf("%d, ", vector[i]);
  }
  printf("%d}\n", vector[i]);

  return 0;

}

void suprimePrimos (int v[TAM], int * tam) {

  int i = 0;

  while (i < *tam) {
    if (esPrimo(v[i]))
      suprimeElemento(v, tam, i);
    else
      i++;
  }

}

void suprimeElemento (int v[TAM], int * tam, int pos) {

  int i;

  if (0 <= pos && pos < *tam) {
    for (i = pos; i < *tam - 1; i++) {
      v[i] = v[i + 1];
    }
    (*tam)--;
  }

}

int esPrimo (int n) {

  int i = 2, exito = 1;

  while (i < n && exito) {
    if (n % i == 0)
      exito = 0;
    else
      i++;
  }

  return exito;

}