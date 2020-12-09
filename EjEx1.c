/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Boletin examen Ej. 1
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define N 3
#define M 3

int ordenaPrimos(int m[N][M], int prim[N*M]);
void ordenaVector(int primos[N*M], int numP);
int esPrimo(int primo);

int main()
{
    int m[N][M] = {{3,7,1},
                   {4,5,6},
                   {2,8,5}};
    int primosOrd[N*M];
    int i, numPrimo;

    numPrimo = ordenaPrimos(m, primosOrd);

    printf("Vector de primos ordenado:\n");
    for(i = 0; i < numPrimo; i++){
        printf(" %d", primosOrd[i]);
    }

    return 0;
}


int ordenaPrimos(int m[N][M], int primos[N*M]){
    int i, j, cont=0;

    i=0;
    while(i < N){
        j=0;
        while(j < M){
           if(esPrimo(m[i][j]) == 1){
               primos[cont] = m[i][j];
               cont++;
           }
           j++;
        }
        i++;
    }
    
    ordenaVector(primos, cont);
    return cont;
}

void ordenaVector(int primos[N*M], int numP){
    int i,j, aux;

    i=0;
    while(i < numP - 1){
       j = i+1;
       while(j < numP) {
        if(primos[i] > primos[j]){
            aux = primos[i];
            primos[i] = primos[j];
            primos[j] = aux;
        }
        j++;
       }
       i++;
    }
}

int esPrimo (int primo) {
    int i = 2;
    int res = 1;

    while(i < primo && res){
        if(primo % i == 0)
            res = 0;
      i++;
    }
    return res;
}
