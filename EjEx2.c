#include <stdio.h>
#include <math.h>

int numero_cifras(int n);
int cifra_iesima(int n, int i);
int suma_cuadrados(int n);

int main () {
  int n = 122, res;

  res = suma_cuadrados(n);

  printf("Resultado: %d\n", res);

}

int numero_cifras(int n) {
  int i = 1, exito = 0;

  while (!exito)
	  if (pow(10, i) > n)
		  exito = 1;
	  else
		  i++;
  
  return i;
}

int cifra_iesima(int n, int i) {
  return (n / (int)pow(10, i)) % 10;
}

int suma_cuadrados(int n) {
  int suma = 0, i = 0, ncifras, cifra_i;

  ncifras = numero_cifras(n);
  while (i < ncifras)	{
    cifra_i = cifra_iesima(n, i);	
    suma += cifra_i * cifra_i;
    i++;
	}

  return(suma);
}
