#include "student.h"

//Cerinta 1
double medie(student a) {
	double sum = 0;
	for (int i = 0; i < 5; i++)
		sum += a.note[i];
	return sum / 5;
};
int nr_restante(student a) {
	int nr = 0;
	for (int i = 0; i < 5; i++)
		if (a.note[i] < 5) nr++;
	return nr;
}
bool restanta(student a) {
	double check = medie(a);
	if (check < 5.00)
		return true;
	else return false;
};


void citire(student *v, int dim) {
	for (int i = 0; i < dim; i++) {
		char aux_nume[25], aux_prenume[25];
		//Nume
		printf("Nume: ");
		scanf("%s", aux_nume);
		v[i].nume = (char *)malloc(sizeof(char) * strlen(aux_nume) + 1);
		strcpy(v[i].nume, aux_nume);
		//Prenume
		printf("Prenume: ");
		scanf("%s", aux_prenume);
		v[i].prenume = (char *)malloc(sizeof(char) * strlen(aux_prenume) + 1);
		strcpy(v[i].prenume, aux_prenume);
		//Id
		printf("Id: ");
		scanf("%s", v[i].id);
		//Note:
		printf("Note:\n");
		for (int j = 0; j < 5; j++)
			scanf("%lf", &v[i].note[j]);
	}
}

void alocare_memorie (student **vector, int dim) {
	*vector = (student *)malloc(sizeof(student) * dim); //nume si prenume se aloca la citire
}

void afisare(student a) {
	//printf("\n---Afisare---\n");
	printf("\n\nNume: %s\nPrenume: %s\nId: %s\n", a.nume, a.prenume, a.id);
	printf("Note:\n");
	for (int i = 0; i < 5; i++)
		printf("%.0lf ", a.note[i]);
	printf("\nMedie: %.2lf\n", medie(a));
	if (nr_restante(a) != 0) printf("Nr restante: %d\n", nr_restante(a));
}

void swap(student *a, student *b) {
	//auxiliar
	student temp;
	temp.nume = (char *)malloc(sizeof(char) * strlen(a->nume) + 1);
	temp.prenume = (char *)malloc(sizeof(char) * strlen(a->prenume) + 1);
	strcpy(temp.nume, a->nume);
	strcpy(temp.prenume, a->prenume);
	strcpy(temp.id, a->id);
	for (int i = 0; i < 5; i++)
		temp.note[i] = a->note[i];

	//studentul a cu valorile lui b
	
	if (a->nume != NULL) 
		free(a->nume);
	if (a->prenume != NULL)
		free(a->prenume);
		
	a->nume = (char *)malloc(sizeof(char) * strlen(b->nume) + 1);
	strcpy(a->nume, b->nume);

	a->prenume = (char *)malloc(sizeof(char) * strlen(b->prenume) + 1);
	strcpy(a->prenume, b->prenume);
	strcpy(a->id, b->id);

	for (int i = 0; i < 5; i++)
		a->note[i] = b->note[i];

	//studentul b cu valorile lui a
	
	if (b->nume != NULL) 
		free(b->nume);
	if (b->prenume != NULL)
		free(b->prenume);
	
	b->nume = (char *)malloc(sizeof(char) * strlen(temp.nume) + 1);
	strcpy(b->nume, temp.nume);

	b->prenume = (char *)malloc(sizeof(char) * strlen(temp.prenume) + 1);
	strcpy(b->prenume, temp.prenume);
	strcpy(b->id, temp.id);
	
	for (int i = 0; i < 5; i++)
		b->note[i] = temp.note[i];
}

void sortare (student *vector, int dim) {
	for (int i = 0; i < dim - 1; i++)
		for (int j = 0; j < dim - i - 1; j++) 
			if (medie(vector[j]) > medie(vector[j + 1]))
				swap(&vector[j], &vector[j + 1]);
}