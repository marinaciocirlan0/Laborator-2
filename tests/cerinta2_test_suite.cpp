#include "catch.hpp"
#include "../src/student.h"
#include "utils.hpp"

TEST_CASE("Cerinta 2: Eliminare studenti cu restanta") {
	student *v;
	int n;
	alocare_memorie(&v, 4);
	v = citire_fisier(v, &n);
	v = eliminare_restantieri(v, &n);

	//Verificare eliminare
	bool result = true;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			if (v[i].note[j] < 5.00)
				result = false;
	free(v);
	REQUIRE(result == true);
}