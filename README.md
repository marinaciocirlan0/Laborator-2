<h1 align="center">
 Laborator-2 Alocare dinamica, structuri
</h1>

**Cerință:**

- Se dă stuctura student: 
```
struct student{
char *nume, *prenume;
char id[6];   //id student
double note[5]; // aici se salveaza notele obtinute in semestrul anterior
};
```

1. În main – declarați un vector student alocat dinamic. Populați-l cu date citite de la tastatură. Sortați-l după medie. Afișați studenții cu restanțe, astfel: id, nume, prenume, număr de restanțe.  

* **Implementați cerințele utilizând funcții**: 
[] alocare spațiu pentru vector, sortare pentru vector, afișare pentru vector
[] citire date pentru o variabilă de tip student, calcul medie/ restanță pentru un student, afișare date student 
[] Pentru sortare se poate folosi orice metodă

2. Realizați o funcție care șterge din vector toți studenții care au cel puțin o restanță (realocând spațiul ocupat).  Afișati vectorul rezultat. Care este complexitatea pentru secvența de ștergere a elementelor din vector cu realocare de spațiu ? 
3. Reaizați o funcție care adaugă în vector un student nou, pe o anumită poziție (realocând spațiul ocupat).  Afisati vectorul rezultat. Care este complexitatea ?

* Recomandare: citirile, afisarile se fac din/in fisiere text.
