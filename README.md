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

1. În main – declarați un vector student alocat dinamic și populați-l cu datele citite de la tastatură. Realizați o sortare după medie și mai apoi afișați studenții cu restanțe astfel: id, nume, prenume, număr de restanțe. 

* **Implementați cerințele utilizând funcții pentru** 
> alocare de spațiu, sortare și afișare pentru vector<br/>
> citirea datelor pentru o variabilă de tip student, calculul mediei, al restanțelor și afișarea datelor<br/> 

2. Realizați o funcție care șterge din vector toți studenții care au cel puțin o restanță (realocând spațiul ocupat).  Afișati vectorul rezultat. Care este complexitatea pentru secvența de ștergere a elementelor din vector cu realocare de spațiu ? 
3. Realizați o funcție care adaugă în vector un student nou, pe o anumită poziție (realocând spațiul ocupat).  Afișati vectorul rezultat. Care este complexitatea ?

* Recomandare: citirile, afișările se fac din și în fisiere text.
