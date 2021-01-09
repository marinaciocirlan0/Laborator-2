<h1 align="center">
# Laborator-2 Alocare dinamica, structuri
</h1>

**Cerinta:**

- Se da stuctura student: 
```
struct student{
char *nume, *prenume;
char id[6];   //id student
double note[5]; // aici se salveaza notele obtinute in semestrul anterior
};
```

1. In main – declarati un vector de student alocat dinamic. Populati-l cu date citite de la tastatura. Sortati-l dupa medie. Afisati studentii cu restante astfel: id, nume, prenume, nr de restante.  

* ***Implementati cerintele de mai sus utilizand functii***: 
-  alocare spatiu pentru vector, sortare pentru vector, afisare pentru vector
-  citire date pentru o variabila de tip student, calcul medie/ restanta pentru un student, afisare date student. 
** Pentru sortare se poate folosi orice metoda

2. Realizati o functie care sterge din vector toti studentii care au cel putin o restanta (realocand spatiul ocupat).  Afisati vectorul rezultat. Care este complexitatea pentru secventa de stergere a elementelor din vector cu realocare de spatiu ? 
3. Reaizati o functie care adauga in vector un student nou, pe o anumita pozitie (realocand spatiul ocupat).  Afisati vectorul rezultat. Care este complexitatea ?

* Recomandare: citirile, afisarile se fac din/in fisiere text.
