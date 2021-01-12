#include "student.h"
void realocare_memorie (student **vector, int dim) {
	*vector = (student *)realloc(*vector, dim * sizeof(student));
}

void add_student (student *v, int poz, int dim) {
	char aux_nume[25], aux_prenume[25];
	//Nume
	printf("\nDatele noului student:\nNume: ");
	scanf("%s", aux_nume);
	v[dim-1].nume = (char *)malloc(sizeof(char) * strlen(aux_nume) + 1);
	strcpy(v[dim-1].nume, aux_nume);

	//Prenume
	printf("Prenume: ");
	scanf("%s", aux_prenume);

	v[dim-1].prenume = (char *)malloc(sizeof(char) * strlen(aux_prenume) + 1);
	strcpy(v[dim-1].prenume, aux_prenume);

	//Id
	printf("Id: ");
	scanf("%s", v[dim-1].id);

	//Note:
	printf("Note:\n");
	for (int j = 0; j < 5; j++)
		scanf("%lf", &v[dim-1].note[j]);

	int loop = 0;

	while (loop != dim - 1 - poz) {
		swap(&v[dim-1], &v[poz + loop]);
		loop++;
	}
	/*Care este complexitatea metodei folosite?*/
}