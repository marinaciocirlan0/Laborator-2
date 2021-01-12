#include "student.h"

student * citire_fisier(student *v, int *new_dim) {
	FILE *input = fopen("input.txt", "r");
	int dim;
	fscanf(input, "%d", &dim);
	alocare_memorie(&v, dim);

	for (int i = 0; i < dim; i++) {
		char aux_nume[25], aux_prenume[25];
		fscanf(input, "%s", aux_nume);
		v[i].nume = (char *)malloc(sizeof(char) * strlen(aux_nume) + 1);
		strcpy(v[i].nume, aux_nume);
		//Prenume
		fscanf(input, "%s", aux_prenume);
		v[i].prenume = (char *)malloc(sizeof(char) * strlen(aux_prenume) + 1);
		strcpy(v[i].prenume, aux_prenume);
		//Id
		fscanf(input, "%s", v[i].id);
		//Note:
		for (int j = 0; j < 5; j++)
			fscanf(input, "%lf", &v[i].note[j]);
	}

	*new_dim = dim;
	fclose(input);
	return v;
}

void afisare_fisier(student *v, int dim) {
	FILE *output = fopen("output.out", "w");
	for (int i = 0; i < dim; i++) {
		fprintf(output, "Nume: %s\n", v[i].nume);
		fprintf(output, "Prenume: %s\n", v[i].prenume);
		fprintf(output, "Id: %s\n", v[i].id);
		fprintf(output, "Note:\n");
		for (int j = 0; j < 5; j++)
			fprintf(output, "%.0lf ", v[i].note[j]);
		if (nr_restante(v[i]) != 0) fprintf(output, "\nNr. restante: %d\n", nr_restante(v[i]));
		fprintf(output, "\n");
	}

	fclose(output);
}