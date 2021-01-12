#include "catch.hpp"
#include "../src/student.h"
#include "utils.hpp"
/*
TEST_CASE("Etapa finala: Stress test") {
    student *v;
	int n = 4;
    int poz = 2;
    bool result = true;
	alocare_memorie(&v, n);
	v = citire_fisier(v, &n);
    //se adauga studentul: Camil Petrescu 99 10 10 10 10 10
    n++;

    add_student(v, poz, n);
    for (int i = 0; i < n; i++)
        afisare(v[i]);
    //sortare(v, n); //prblm

    v = eliminare_restantieri(v, &n);

    afisare_fisier(v, n);
    
    REQUIRE (result == true);
}
*/