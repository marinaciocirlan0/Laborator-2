#include "student.h"
int main() {
	int dim = 2;
	student *v;
	
	alocare_memorie(&v, dim);
	citire(v, dim);
	sortare(v, dim);
	printf("\n--------Afisare studenti---------\n");
	for (int i = 0; i < dim; i++)
		afisare(v[i]);

	printf("\n--------Eliminare restantieri---------\n");
	v = eliminare_restantieri(v, &dim);
	for (int i = 0; i < dim; i++)
		afisare(v[i]);

	printf("\n--------Adaugare student pe poz P---------\n");

	dim++;
	realocare_memorie(&v, dim);
	add_student(v, 1, dim);

	printf("\n--------Afisare vector cu noul student---------\n");
	for (int i = 0; i < dim; i++)
		afisare(v[i]);
	
	printf("\n--------Operatii cu fisiere---------\n");
	free(v);
	v = citire_fisier(v, &dim);
	for (int i = 0; i < dim; i++)
		afisare(v[i]);
	afisare_fisier(v, dim);
	free(v);
	return 0;
}