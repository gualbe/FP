/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 5.13 
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 100

int numCaracteresComunes (char cadena1 [], char cadena2 []);

int main () {
  
  char cad1 [TAM] = "Maria Jose";
  char cad2 [TAM] = "Marta";
  int res;

  res = numCaracteresComunes(cad1, cad2);

  printf("%d caracteres comunes.\n", res);

  return 0;

}

int numCaracteresComunes (char cadena1 [], char cadena2 []) {
  int i = 0, res = 0;

  while (cadena1[i] != '\0' && cadena2[i] != '\0') {
    if (cadena1[i] == cadena2[i])
      res++;
    i++;
  }

  return res;
}

