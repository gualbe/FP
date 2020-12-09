/* ************************************
   Fundamentos de Programacion
   Ejercicios resueltos de examen T1-5
   Boletin examen Ej. 6
   Prof. Dr. Gualberto Asencio Cortes
   ************************************ */

#define NFIL 100
#define NCOL 100

int columnaSumaMayor (float m[NFIL][NCOL], float umbral)
{
	int i = 0, j, exito = 0;
	float s;

	while (i < NCOL && !exito)
	{
		s = 0;
		for (j = 0; j < NFIL; j++)
			s += m[j][i];
		if (s > umbral)
			exito = 1;
		i++;
	}
	return exito;
}

