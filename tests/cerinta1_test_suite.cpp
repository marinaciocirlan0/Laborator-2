#include "catch.hpp"
#include "../src/student.h"
#include "utils.hpp"

TEST_CASE("Cerinta 1: Creare vector (alocare dinamica + citire)") {
	student *v;
	int n = 4;
	alocare_memorie(&v, n);
	v = citire_fisier(v, &n);

	//Verificare alocare_memorie + citire
	bool result = true;

	if (strcmp(v[0].nume, "Popescu") != 0 || strcmp(v[1].nume, "Macarie") != 0 || strcmp(v[2].nume, "Pompiliu")  != 0 || strcmp(v[3].nume,"Eliade") != 0)
		result = false;
	if (strcmp(v[0].prenume, "Ion") != 0 || strcmp(v[1].prenume, "Stefan") != 0 || strcmp(v[2].prenume,"Marian") != 0 || strcmp(v[3].prenume,"Mircea") != 0)
		result = false;

	int suma_note = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++)
			suma_note += v[i].note[j];
	}
	if (suma_note != 139)
		result = false;
	//Verificare afisare
	for (int i = 0; i < n; i++)
		//afisare(v[i]);
	free(v);
	REQUIRE(result == true);
}

TEST_CASE("Cerinta 1: Sortare vector") {
	student *v;
	int n = 4;
	alocare_memorie(&v, n);
	v = citire_fisier(v, &n);
	n++;
	add_student(v, 2, n);
	sortare(v, 5);
	for (int i = 0; i < n; i++)
		afisare(v[i]);
	bool result = true;
	//Verificare sortare
	if (abs(5.2 - medie(v[0])) > 0.01)
		result = false;
	if (abs(6.6 - medie(v[1])) > 0.01)
		result = false;
	if (abs(7.8 - medie(v[2])) > 0.01)
		result = false;
	if (abs(8.2 - medie(v[3])) > 0.01)
		result = false;

	REQUIRE(result == true);
}
