#include "student.h"

student * eliminare_restantieri(student *v, int *dim) {
	student *copy;
	alocare_memorie(&copy, *dim);
	int count = 0;
	for (int i = 0; i < *dim; i++) {
		if (nr_restante(v[i]) == 0) {
			copy[count].nume = (char *)malloc(sizeof(char) * strlen(v[i].nume) + 1);
			copy[count].prenume = (char *)malloc(sizeof(char) * strlen(v[i].prenume) + 1);

			strcpy(copy[count].nume, v[i].nume);
			strcpy(copy[count].prenume, v[i].prenume);
			strcpy(copy[count].id, v[i].id);

			for (int j = 0; j < 5; j++)
				copy[count].note[j] = v[i].note[j];
			count++;
		}
	}

	*dim = count;
	free(v);
	return copy;
	/* Care este complexitatea pentru secventa de stergere a elementelor din vector cu realocare de memorie?*/
}