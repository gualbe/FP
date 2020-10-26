#include <stdio.h>

#define TAM 50

int encontrarPosiciones (int v[TAM], int tam, int num, int pos[TAM]);
void imprimirPosiciones (int v[TAM], int tam);

int main ()
{
  int vec[TAM] = {4,5,6,6,6,7,8,6};
  int posiciones[TAM] = {};
  int num, tam;

  printf("Introduzca el numero a buscar en el vector\n");
  scanf("%d", &num);

  tam = encontrarPosiciones(vec, 8, num, posiciones);

  imprimirPosiciones(posiciones, tam);

  return 0;
}

int encontrarPosiciones (int v[TAM], int tam, int num, int pos[TAM]) {
  int cont = 0, i;

  for(i = 0; i < tam; i++){
    if(v[i] == num){
        pos[cont] = i;
        cont++;
    }
  }
  
  return cont;
}

void imprimirPosiciones (int v[TAM], int tam) {
  int i;

  if (tam == 0)
    printf("El numero no se ha encontrado en el vector\n");
  else {
    printf("Las posiciones encontradas son: ");
    for(i = 0; i < tam; i++) {
      printf("%d, ", v[i]);
    }
  }
}

