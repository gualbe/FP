/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 8.6
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>
#include <string.h>

#define TAM 100

typedef struct {
  char titulo[TAM];
  char autores[TAM];
  int anyo;
  int numPaginas;
} Libro;

int leerLibrosFichero (char nombreFichero [TAM], Libro libros [TAM]);
void ordenarLibrosAnyo (Libro libros [TAM], int numLibros);
void escribirLibrosFichero (Libro libros[TAM], int numLibros, char nombreFichero[TAM]);

int main() {
  Libro libros [TAM];
  int numLibros;

  numLibros = leerLibrosFichero("libros.txt", libros);
  ordenarLibrosAnyo(libros, numLibros);
  escribirLibrosFichero(libros, numLibros, "salida.txt");

  return 0;
}

int leerLibrosFichero (char nombreFichero [TAM], Libro libros [TAM]) {
  FILE * f;
  int i, n;

  f = fopen(nombreFichero, "r");
    
  if (f == NULL)
    printf("El fichero no se ha podido abrir.\n");
  else {
    fscanf(f, "%d\n", &n);
    for (i = 0; i < n; i++) {
      fgets(libros[i].titulo, TAM, f);
      libros[i].titulo[strlen(libros[i].titulo)-1] = '\0';
      fgets(libros[i].autores, TAM, f);
      libros[i].autores[strlen(libros[i].autores)-1] = '\0';
      fscanf(f, "%d%d\n", &libros[i].anyo, &libros[i].numPaginas);
    }
    fclose(f);
  }

  return n;
}

void ordenarLibrosAnyo (Libro libros [TAM], int numLibros) {
  int i, j;
  Libro aux;

  for (i = 0; i < numLibros - 1; i++) {
    for (j = i + 1; j < numLibros; j++) {
      if (libros[i].anyo > libros[j].anyo) {
        aux = libros[i];
        libros[i] = libros[j];
        libros[j] = aux;
      }
    }
  }
}

void escribirLibrosFichero (Libro libros[TAM], int numLibros, char nombreFichero[TAM]) {
    FILE * f;
    int i;
    
    f = fopen(nombreFichero, "w");
    
    if (f == NULL)
        printf("El fichero no se ha podido abrir.\n");
    else {
        fprintf(f, "%d\n", numLibros);
        for (i = 0; i < numLibros; i++) {
            fprintf(f, "%s\n%s\n%d\n%d\n", libros[i].titulo, libros[i].autores,
                    libros[i].anyo, libros[i].numPaginas);
        }
        fclose(f);
    }
}
