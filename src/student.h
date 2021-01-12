#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct student {
	char *nume, *prenume;
	char id[6];
	double note[5];
}student;

//Cerinta 1
void alocare_memorie (student **vector, int dim);
void citire(student *v, int dim);
void swap(student *a, student *b);
void sortare (student *vector, int dim);
void afisare(student a);

double medie(student a);
int nr_restante(student a);
bool restanta(student a);

//Cerinta 2
student * eliminare_restantieri(student *v, int *dim);


//Cerinta 3
void add_student (student *v, int poz, int dim);
void realocare_memorie (student **vector, int dim);

//Cerinta 4
student * citire_fisier(student *v, int *new_dim);
void afisare_fisier(student *v, int dim);