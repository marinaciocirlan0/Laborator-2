#include "catch.hpp"
#include "../src/student.h"
#include "utils.hpp"

TEST_CASE("Cerinta 3: Adaugare student pe pozitia P") {
    student *v;
	int n;
	alocare_memorie(&v, 4);
    v = citire_fisier(v, &n);
    //adaugare student
    n++;
    int poz = 3;
    add_student (v, poz, n);

    bool result = true;

	if (strcmp(v[poz].nume, "Petrescu") != 0 || strcmp(v[poz].prenume, "Camil") != 0)
        result = false;

    free(v);
	REQUIRE(result == true);
}