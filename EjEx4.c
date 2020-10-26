#include <stdio.h>

#define TAM 100

int esPrimo (int n);
int contarPrimos (int v [TAM], int tam);

int main() {
  int vector[TAM] = {1, 2, 3, 6, 7, 8, 10, 11, 12};
  int res;

  res = contarPrimos(vector, 9);

  printf("Existen %d primos en el vector.\n", res);
}

int esPrimo (int n) {
  int exito = 1, d = 2;

  while (d < n && exito) {
    if (n % d == 0)
      exito = 0;
    else
      d++;
  }

  return exito;
}

int contarPrimos (int v [TAM], int tam) {
  int res = 0, i;

  for (i = 0; i < tam; i++)
    if (esPrimo(v[i]))
      res++;

  return res;
}

