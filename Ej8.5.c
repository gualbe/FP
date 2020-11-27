/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de EB
   Ejercicio 8.5
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#include <stdio.h>

#define TAM 100

typedef struct {
  char titulo[TAM];
  char autores[TAM];
  int anyo;
  int numPaginas;
} Libro;

int leerLibrosTeclado (Libro libros[TAM]);
void escribirLibrosFichero (Libro libros[TAM], int numLibros, char nombreFichero[TAM]);

int main() {
    int n;
    Libro libros[TAM];

    n = leerLibrosTeclado(libros);
    escribirLibrosFichero(libros, n, "libros.txt");

    return 0;
}

int leerLibrosTeclado (Libro libros[TAM]) {
    int i, n;

    printf("¿Cuántos libros desea introducir?: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
      printf("Libro %d.-\n", i + 1);
      printf("Título: ");
      fflush(stdin);
      gets(libros[i].titulo);
      printf("Autores: ");
      gets(libros[i].autores);
      printf("Año: ");
      scanf("%d", &libros[i].anyo);
      printf("Páginas: ");
      scanf("%d", &libros[i].numPaginas);
    }

    return n;
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
