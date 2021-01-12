#include "catch.hpp"
#include "../src/student.h"
#include "utils.hpp"

TEST_CASE("Cerinta 4: Citire din fisier") {
    student *v;
	int n = 4;
	alocare_memorie(&v, n);
	v = citire_fisier(v, &n);

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
    free(v);
	REQUIRE(result == true);
}