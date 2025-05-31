# Egzaminas

## Programos paskirtis

Ši programa skirta analizuoti tekstinius duomenis – suskaičiuoti žodžių pasikartojimus, nurodyti jų vietas tekste bei aptikti visus URL adresus. Rezultatai išsaugomi atskiruose failuose.

## Programos naudojimo instrukcija

Paleidus programą, matysite meniu:

```
MENIU:
1 - Nuskaityti teksta is failo
2 - Ivesti teksta ranka
0 - Iseiti
Pasirinkite:
```

Pasirinkus 1 arba 2, įvedus tekstą ar nurodžius failą, matysite antrą meniu:

```
1 - Atrasti zodzius ir ju vieta
2 - Atrasti tik URL adresus
3 - Atlikti abu veiksmus
Pasirinkite:
```

- **1** – suskaičiuojami visi žodžiai, kurie pasikartoja daugiau nei vieną kartą, ir nurodomos jų vietos (eilutės). Rezultatai įrašomi į `output.txt` ir `crossref.txt`.
- **2** – aptinkami visi URL adresai ir įrašomi į `urls.txt`.
- **3** – atliekami abu veiksmai.

Rezultatai įrašomi į failus su prefiksu pagal pasirinkimą (`failas_` arba `ivedimas_`).

## Pavyzdžiai

### 1) Žodžių skaičiavimas ir vietų radimas

**input.txt**:
```
Labas pasauli labas pasauli
labas
LABAS, pasauli!
```

**output.txt**:
```
labas 4
pasauli 3
```

**crossref.txt**:
```
Zodis   Eilutes
labas   1, 2, 3
pasauli 1, 3
```

### 2) URL aptikimas

**input.txt**:
```
Aplankykite https://vu.lt ir www.vilnius.lt arba vilnius.lt, taip pat test.com/test.
```

**urls.txt**:
```
Rasti URL adresai:
https://vu.lt
www.vilnius.lt
vilnius.lt
test.com/test
```

### 3) Abu veiksmai

Rezultatai įrašomi į visus tris failus: `output.txt`, `crossref.txt`, `urls.txt`.

## Programos instaliavimas ir paleidimas

### Naudojant CMake

1. Sukurkite `build` aplanką:
   ```
   mkdir build
   cd build
   ```
2. Paleiskite:
   ```
   cmake ..
   cmake --build .
   ```
3. Paleiskite programą:
   ```
   ./main.exe
   ```

## Programos testavimas

- Sukurti unit testai naudojant Catch2 (`unit_test` aplanke).
- Testai tikrina pagrindinių funkcijų veikimą ir edge atvejus.
- Paleisti testus galite nuėję į unit_test aplanką, sukompiliavę `g++ -O0 -o main catch.cpp funkcijos.cpp catch_amalgmated.cpp` ir paleidę `main.exe`:

## Programos dokumentacija

- Dokumentacija generuojama su Doxygen.
