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

## Pavyzdys su pridėtu input.txt failu

**input.txt**:
```
Panevėžys – šiaurės Lietuvos miestas. Išsidėstęs abipus Nevėžio, dešiniajame krante – Panevėžio senamiestis, kairiajame – Naujamiestis, dabartinis miesto centras.

Yra Vidurio Lietuvos žemumoje. 136 km į šiaurės vakarus nuo Vilniaus. Penktas pagal dydį Lietuvos miestas.

7 pašto skyriai (centrinis LT-35001). Panevėžio rajono savivaldybės ir Panevėžio seniūnijų centras. Galinė Siauruko stotis Panevėžys–Anykščiai. Yra Panevėžio vyskupija, įvairių tikėjimų bažnyčių, cerkvių.

Miesto gimtadienis (miesto diena) švenčiamas rugsėjo 7 d.

Etimologija
Miestas kūrėsi prie Nevėžio upės, todėl ir pavadintas atitinkamai: priešdėlis pa- + upės vardas.[4] Vandenvardinis vietovardis, toks toponimas lietuvių kalbai būdingas, pvz. Pagėgiai, Pakruojis, Pasvalys ir kt.[5]

Istorija
Lietuvos Didžiosios Kunigaikštystės laikai

Panevėžys, pavaizduotas 1573 m. žemėlapyje, šalia pažymėta Ramygala
Nustatyta, kad teritorija, kurioje vėliau įsikūrė Panevėžys, iki XIV a. vidurio buvo beveik ištisai apaugusi miškais. XIV a. Livonijos kronikose minimi Molainiai, Nevėžininkai, Uliūnai, Barklainiai, Velžys ir kitos dabartinio Panevėžio apylinkėse esančios gyvenvietės, tačiau jos buvusios mažos ir nereikšmingos. Palankesnės sąlygos apsigyventi Upytės krašto giriose susidarė, 1435 m. sutriuškinus Livonijos ordiną. Manoma, kad būsimojo miesto teritorijoje žmonės pradėjo kurtis XV a. viduryje – Nevėžio dešiniajame krante, prie kelių iš Ramygalos į Livoniją ir iš Žemaitijos Daugpilio link įsikūrė Panevėžio kaimas (vėliau jam prigijo Senojo Panevėžio pavadinimas). 1503 m. rugsėjo 7 d. Panevėžys pirmą kartą paminėtas rašytiniuose šaltiniuose,[6] kai Lietuvos didysis kunigaikštis Aleksandras dovanojo Ramygalos klebonui žemės sklypą iš savo Panevėžio dvaro ir įpareigojo jį Nevėžio ir Lėvens tarpupyje pastatyti bažnyčią. 1507 m. Senajame Panevėžyje pastatyta kukli medinė bažnyčia, 1509 m. greta jos stovėjo ir smuklė.[7]

1519–1521 m. Nevėžio kairiajame krante, valstybinio dvaro žemėse, susiformavo Naujojo Panevėžio gyvenvietė. Naujasis Panevėžys įsikūrė prie svarbaus prekybos kelio, ėjusio iš Kernavės į Rygą, dėl to, istorikų nuomone, plėtėsi sparčiau už Senąjį. 1529 m. Naujasis Panevėžys įrašytas į Lietuvos Didžiosios Kunigaikštystės neprivilegijuotų miestelių sąrašą, o XVI a. viduryje jau vadinamas miestu. Manoma, kad tuo metu jame galėjo gyventi apie 350 žmonių; daugelis jų vertėsi žemdirbyste ir amatais.[6] Po 1564–1566 m. administracinės reformos Panevėžys tapo apskrities centru – į Naująjį Panevėžį iš Krekenavos atkeltos Upytės apskrities (pavieto) administracinės įstaigos.[8] 1573 m. Panevėžys pirmą kartą pavaizduotas Antverpeno mokslininko Johano Portancijaus sudarytame Livonijos žemėlapyje.[9]


Seniausias Panevėžio namas – buvęs Upytės pavieto žemės ir pilies teismo archyvas, pastatytas 1614 m.
Nuo XVII a. pradžios Naujojo Panevėžio ūkinė veikla kiek išsiplėtė – Panevėžys prekiavo linais su Ramygala, per Panevėžį keliaudavo pirkliai tarp Rygos ir Vilniaus. 1614 m. Naujajame Panevėžyje pastatytas teismo archyvo pastatas ir kiti apskrities statiniai, 1629 m. Senajame Panevėžyje pastatyta nauja medinė bažnyčia. Tačiau miesto ir prekybos plėtotę iš dalies stabdė valdovo dvaro nuomininkai ir XVII–XVIII a. Lietuvoje vykę karai bei siautusios epidemijos. Panevėžys smarkiai nukentėjo per 1654–1667 m. karą, ypač Senasis. 1661 m. Senajam Panevėžiui suteikta turgaus ir mugių privilegija, tačiau ji menkai skatino gyvenvietės plėtrą, sparčiau vystėsi Naujasis Panevėžys. XVII a. Panevėžyje daugėjo kitų tautybių gyventojų, ypač žydų. 1671 m. Senasis Panevėžys išnuomotas žydui Samueliui Juzefovičiui.[9] Istoriniuose šaltiniuose teigiama, kad Panevėžys labai nukentėjo ir Šiaurės karo metu, tačiau duomenų apie nuostolius nepateikiama.[10]

1727 m. Panevėžyje įsikūrė pijorų vienuoliai. Jiems skirtame sklype Naujojo Panevėžio vakarinėje dalyje pastatyta medinė bažnyčia, įsteigtas vienuolynas ir kolegija – pirmoji vidurinė mokykla mieste. Panevėžys tapo nemažo regiono švietimo centru. 1780 m. sudegė Senojo Panevėžio bažnyčia. Ji atstatyta kitoje vietoje, vėliau vadinamoje Smėlyne, arčiau Naujojo Panevėžio.[11] Nuo 1789 m. čia minima Mikolajevo gyvenvietė, sujungusi Senąjį ir Naująjį Panevėžį. XVIII a. antroje pusėje Panevėžys vis dar buvo privačių savininkų rankose, jo statusas balansavo tarp miestelio ir miesto.[6] 1791 m. Naujajam Panevėžiui suteikta sąlyginė privilegija rinkti miesto valdžią.[9]

XIX amžius ir XX amžiaus pradžia
Po Abiejų Tautų Respublikos padalijimo Panevėžys priskirtas Vilniaus gubernijai, nuo 1843 m. buvo Kauno gubernijos sudėtyje.[9]

XIX a. dėl ekonominio ir politinio stabilumo susidarė palankios sąlygos miestui augti, sparčiai daugėjo gyventojų. Miesto augimą skatino ir apskrities centro statusas bei ekonominės ir politinės padėties pagerėjimas, rusų valdžiai 1811 m. išpirkus miestą iš privačių savininkų. 1800 m. Panevėžyje leista steigti rotušę, 1806 m. pastatytas naujas medinis tiltas per Nevėžį į Mikolajevą. 1825 m. pastatyta evangelikų liuteronų bažnyčia, 1841 m. įkurta stačiatikių parapija. Tik tris kartus – 1812 m. pražygiuojant Napoleono armijai ir 1830–1831 bei 1863–1864 metų sukilimų metu miestas patyrė sukrėtimus, bet jų pasekmės greitai likviduotos.[6] Per 1830–1831 m. sukilimą Panevėžį užėmė Kazimiero Truskausko ir Antano Pšeciševskio sukilėlių būriai bei Henryko Dembinskio dalinys. Po sukilimo uždaryta pijorų kolegija, bažnyčia ir vienuolynas. Bažnyčia paversta cerkve, vienuolynas – kareivinėmis. 1840–1865 m. mieste veikė iš Troškūnų atkelta Panevėžio apskrities bajorų mokykla. 1848 ir 1853 m. Panevėžyje siautėjo choleros epidemija.[12] 1866 m. vietoj rotušės įsteigta miesto dūma, 1872 m. patvirtintas pirmasis miesto planas.[9]


Turgaus aikštė ir Vilkmergės gatvė XX a. pradžioje
XIX a. antroje pusėje po valstiečių reformos spartėjo pramonės raida, miestas tapo regiono pramonės centru. Iki amžiaus pabaigos atsirado pirmosios modernios įmonės, pradėti naudoti mechaniniai varikliai, gamyba orientuota į platesnes rinkas. 1873 m. pro Panevėžį nutiestas Radviliškio–Daugpilio geležinkelis, 1898 m. – Panevėžio–Pastovių siaurasis geležinkelis. 1881 m. apie ketvirtadalį miesto sunaikino gaisras. Tais pačiais metais įsteigta Panevėžio tarpusavio kredito draugija, realinė mokykla, 1891 m. įkurta didžiausia įmonė mieste – Stanislovo Montvilos spirito ir mielių gamykla. XIX a. pabaigoje Panevėžyje pradėti steigti versliniai malūnai.[9] Didėjo gyventojų raštingumas, vyko luomų niveliacija, stiprėjo lietuvių, lenkų ir žydų tautinis judėjimas. 1897 m. miesto gyventojų skaičius pasiekė 13 tūkst. – 16 kartų daugiau, nei amžiaus pradžioje.[6] XIX a. pabaigoje Senasis Panevėžys, Naujasis Panevėžys ir Mikolajevas jau sudarė gana vientisą miestą.[13]

XX a. pradžioje aktyvėjo miesto kultūrinis gyvenimas. 1905 m. atidarytas lietuviškas Juozo Masiulio knygynas, 1906 m. pradėjo veikti „Aido” draugija, 1914 m. išėjo pirmasis miesto laikraštis „Naš kraj” („Mūsų kraštas”).[9]

Prasidėjus Pirmajam pasauliniam karui, 1915 m. pavasarį į Panevėžį iš Kauno perkeltos gubernijos įstaigos – Panevėžys laikinai tapo gubernijos centru. Liepos pabaigoje miestą be didesnio pasipriešinimo užėmė Vokietijos imperijos kariuomenė. Prieš tai iš Panevėžio pasitraukė apie ketvirtadalį gyventojų, evakuotos pagrindinės įmonės, įstaigos, žaliavų ir maisto atsargos. Likusias vertybes iš miesto išgabeno vokiečių okupacinė valdžia. Karo metu mieste siautė gaisrai ir įvairios epidemijos, nuo gaisrų ir plėšimų nukentėjo beveik trečdalis pastatų. Vokiečių valdžia palaikė komunalinę tvarką, gaivino karo poreikiams reikalingą gamybą, leido oficialiai veikti kultūros ir švietimo draugijoms. 1915 m. mieste atidaryta pirmoji lietuviška gimnazija.[14]

Nepriklausomybės kovos ir tarpukaris

Ūkininkų smulkaus kredito bankas Panevėžio Laisvės aikštės pietinėje pusėje. 4-ojo dešimtmečio pabaiga
1918 m. lapkritį Vokietijos kariuomenė pamažu ėmė trauktis iš Lietuvos teritorijos. 1919 m. sausį mieste iš savanorių sudarytas Lietuvos kariuomenės karininko Jono Variakojo vadovaujamas Panevėžio srities apsaugos būrys. Raudonajai armijai veržiantis į krašto gilumą, J. Variakojo būrys atsitraukė Kėdainių link, kur, pasipildęs savanoriais, smarkiai išaugo ir buvo pervadintas Panevėžio atskiruoju batalionu. Sausio 9 d. Raudonoji armija įžengė į Panevėžį, o kovo 27 d. Panevėžio batalionas kartu su vokiečių kareiviais miestą išvadavo. Tačiau balandžio 5 d. Raudonoji armija savanorius vėl išstūmė iš miesto. Lietuvos kariuomenei sukaupus papildomas pajėgas ir paruošus puolimo planą, gegužės 18 d. prasidėjo Panevėžio išvadavimo operacija. Gegužės 19 d. po atkaklių kautynių miestas išvaduotas, Raudonoji armija atsitraukė link Kupiškio.[15]


Miesto gatvės grindinį vandeniu plauna Panevėžio savivaldybės ugniagesių komandos automobilinė dvejopos paskirties cisterna Faun M5. 1940 m.
Atsigavęs po karo miestas vėl sparčiai augo, modernėjo, lietuvėjo. Nuo 1919 m. turėjo apskrities miesto, nuo 1932 m. – pirmos eilės miesto statusą.[13] Nuo 1920 m. turėjo savo biudžetą, ūkis buvo tvarkomas pagal planą. 1923 m. pradėjo veikti miesto elektrinė, veiklą tęsė prieš karą buvusios įmonės – spirito ir mielių gamykla, Kalnapilis, degtinės pilstykla, linų fabrikas ir kitos. 1931 m. pradėjo veikti didžiausias mieste akcinės bendrovės „Maistas” fabrikas, 1933 m. – muilo fabrikas. Ketvirtojo dešimtmečio pabaigoje pradėta cukraus fabriko statyba.[9] Tarpukariu Panevėžys buvo didžiausias grūdų malimo centras Lietuvoje; 1931 m. duomenimis, mieste veikė du vėjo, trys motoriniai ir keturi garo malūnai.[16]

1923 m. mieste atidaryta apskrities ligoninė, 1930 m. suorganizuotas autobusų susisiekimas, ketvirtajame dešimtmetyje pradėta tiesti kanalizacija, koreguota Nevėžio vaga, sutvarkyta Laisvės aikštė.[17] XX a. trečiajame ir ketvirtajame dešimtmečiuose grįstos gatvės, pastatyta modernių pastatų, daugėjo mokyklų: 1921 m. įkurta Miškų technikos, 1922 m. – berniukų, 1927 m. – mergaičių amatų mokykla, 1932 m. – mergaičių gimnazija. Be to, mieste buvo dvi žydų ir viena lenkų gimnazijos, žydų vidurinė mokykla ir žydų dvasinė seminarija. 1919 m. atkurta „Aido” draugija, 1922 m. pradėjo veikti viešoji biblioteka, nuo 1924 m. leistas „Panevėžio balso” laikraštis. 1925 m. įkurta „Dainos” draugija ir kraštotyros muziejus. Mieste buvo daug chorų, rengtos dainų šventės.[13] Veikė ateitininkai, skautai, šauliai, žydų ir lenkų tautinės bendrijos.[6] 1926 m. įkurta Panevėžio vyskupija, 1927 m. Panevėžyje įsikūrė marijonų vienuoliai, 1930 m. pašventinta Kristaus Karaliaus katedra. Tarpukariu mieste buvo dislokuotas Pirmosios pėstininkų divizijos štabas.[9]

Hitlerinė okupacija ir sovietmetis

Karinė technika Laisvės aikštėje, vykstant Antrajam pasauliniam karui
1940 m. birželio 15 d. Panevėžį užėmė TSRS kariuomenė.[6] Prasidėjo pirmieji areštai, trėmimai, nacionalizuotos miesto įmonės. 1941 m. birželį traukdamasi sovietų kariuomenė ir Valstybės saugumo liaudies komisariatas nukankino tris Panevėžio gydytojus, gailestingąją seserį ir dar tris panevėžiečius, prie cukraus fabriko sušaudė 19 politinių kalinių. Mieste prasidėjo sukilimas prieš sovietų valdžią. Birželio 27 d. į Panevėžį įžengė Vokietijos kariuomenė. Netrukus įsteigtas žydų getas, nužudyti sovietiniai kolaborantai ir beveik visi miesto žydai. 1944 m. Vokietijos kariuomenė atsitraukdama apgriovė 13 pramonės įmonių, malūnus ir elektros stotis, kiek vėliau jos aviacija subombardavo gyvenamųjų namų kvartalus prie Turgaus (dabar Laisvės) aikštės. 1944 m. liepos 22 d. Panevėžį vėl užėmė TSRS kariuomenė.[13] Po karo sovietiniam okupaciniam režimui priešinosi „Juostino” (palaikė ryšius su Algimanto apygardos partizanais), „Baltosios lelijos” (palaikė ryšius su Lietuvos laisvės armija), „Gedimino būrio”, „Atžalyno” ir kitos pogrindinės organizacijos.[9]

Po Antrojo pasaulinio karo miesto natūralią raidą sutrikdė sovietinė okupacija. Didelę įtaką miesto gyvenimui darė TSKP ir sovietinių valdžios įstaigų direktyvinis vadovavimas.[6] Miestas formuotas kaip didelis pramonės centras: per šeštąjį–aštuntąjį dešimtmečius pastatyta stambių pramonės įmonių – Lietkabelio, Gelžbetonio dirbinių, Tiksliosios mechanikos, Autokompresorių, Ekrano gamyklos, Stiklo fabrikas. Sparčiai daugėjo gyventojų, plėtėsi miesto teritorija, pastatyti nauji daugiabučių rajonai. 1948 m. įvesta kanalizacija, 1960 m. – vandentiekis, 1963 m. – gamtinės dujos.[13] Septintajame dešimtmetyje pradėta miesto centrinės dalies rekonstrukcija, 1972 m. pradėta rekonstruoti Nevėžio Senvagė.[9]

1944 m. atidaryta suaugusiųjų gimnazija, muzikos ir geležinkelininkų mokyklos, 1961 m. – Kauno politechnikos instituto Panevėžio vakarinis skyrius, 1965 m. pradėjo veikti vienintelė Lietuvoje internatinė sporto mokykla, 1966 m. – jaunųjų gamtininkų ir jaunųjų technikų stotys, 1967 m. – vaikų dailės mokykla. 1940 m. įkurtas miestą garsinęs Juozo Miltinio dramos teatras.[9] Veikė keturi kino teatrai, dvi dešimtys vidurinių mokyklų, pastatyti modernūs jų pastatai ar priestatai.[18]

Sovietmečiu šalia Panevėžio, Pajuostyje, buvo dislokuotas sovietų kariuomenės bombonešių aviacijos pulkas, kuris vėliau pertvarkytas į karinės transporto aviacijos pulką.[19]

XX a. pabaiga ir XXI a. pradžia
1988 m. liepą įkurta Panevėžio Sąjūdžio rėmimo grupė, rugpjūtį pradėtas leisti laikraštis „Sąjūdžio žodis”. Subyrėjus Sovietų Sąjungai sumažėjo pramonės produkcijos apimtis, bankrutavo dalis miesto įmonių, kūrėsi naujos. 1992 m. Panevėžyje gyveno 132 300 žmonių – daugiausia per visą miesto istoriją, po to gyventojų ėmė mažėti.[20] 1993 m. patvirtintas miesto herbas, 1995 m. atkurta Panevėžio apskritis, 1996 m. praplėstos miesto ribos. 2001 m. įkurtas vienintelis šalyje Norvegijos pramonės parkas, 2008 m. pastatyta termofikacinė elektrinė.[9] 2019 m. pradėta miesto centrinės dalies rekonstrukcija.[21]

Gamta

Panevėžio reljefo žemėlapis

Nevėžio senvagė – viena populiariausių Panevėžio miesto vietų. Dešinėje – Nevėžis
Miestas įsikūręs Nevėžio žemumoje, abipus Nevėžio aukštupio. Šiaurinė dalis išsidėsčiusi Lėvens ir Nevėžio takoskyroje. Reljefas lygus, palaipsniui žemėjantis link Nevėžio. Aukščiausias reljefo taškas – miesto centrinėje dalyje, šalia buvusio vandentiekio bokšto,[22] tarp J. Tilvyčio, Vaižganto ir Aldonos gatvių (apie 66 m virš jūros lygio), žemiausias – vakariniame pakraštyje, Nevėžio ir Sanžilės santakoje (apie 38 m). Nevėžio vidutinis vandens debitas ties Panevėžiu – 7,23 m³/s, maksimalus – 181 m³/s,[23] minimalus vasarą – 0,71 m³/s, žiemą – 1,45 m³/s.[24] Dviejose miesto vietose Nevėžis patvenktas: ties Savitiškio tiltu (dabartinė gelžbetoninė užtvanka įrengta 1974 m.)[25] ir ties buvusia „Ekrano” gamykla (1979 m.). Prie pastarosios užtvenkus susidarė didžiausias Panevėžio vandens telkinys – 85 ha ploto Ekrano marios.[26] Miesto centre telkšo Senvagė – tarpukariu ištiesinus Nevėžio vagą susidaręs vandens telkinys, 1981 m. sutvarkytas, paverstas poilsio zona.[27] Miesto teritorija teka dar aštuoni pavadinimus turintys vandentakiai: Sanžilės kanalas, Žagienis, Šermutas (Nevėžio intakai), Šakinė (Molainos intakas), Vilktupis (Lėvens intakas), Sirupis (užpiltas, teka į Nevėžį po žeme), Varnaitis (Nevėžio intakas, iš dalies užpiltas, likęs tik žemupys Kultūros ir poilsio parke) ir Nendrė (iš dalies užpilta). Žagienis žemupyje patvenktas, įrengtas Skaistakalnio tvenkinys.[28]

Natūralių miškų mieste maža – Berčiūnų miško pietinė dalis miesto vakaruose (patenka į Sanžilės kraštovaizdžio draustinį), Daumėnų miškas pietryčiuose ir nedideli užžėlę plotai miesto pramoniniame rajone. Pietinėje ir vakarinėje miesto dalyse, neužstatytose vietose, yra dirbamų laukų. Senuose topografiniuose žemėlapiuose dabartinėse Panevėžio miesto ribose matyti nemažai užpelkėjusių vietovių.[29]

Klimatas
Pagal Kepeno klasifikaciją Panevėžys yra vidutiniškai šalto, tolygiai drėgno su snieginga žiema klimato juostoje. Pagal meteorologines sąlygas miestas patenka į Vidurio žemumos klimato rajono Mūšos-Nevėžio parajonį.[30] Šilčiausias mėnuo – liepa, kai oro temperatūra dieną įšyla vidutiniškai iki 24,1 ºC, šalčiausi – sausis ir vasaris, kai orai naktimis atvėsta vidutiniškai iki -5,6 ºC. Vidutinė metinė oro temperatūra – 7,4 ºC. Kritulių per metus vidutiniškai iškrinta 608 mm (Lietuvoje 695 mm), daugiausia – liepą (83 mm), mažiausiai – vasarį ir kovą (33 mm).[31] Karščio rekordas mieste, +35,5 ºC, užfiksuotas 1992 m. rugpjūčio 10 d.,[32] šalčiausia temperatūra, -37,1 ºC, registruota 1956 m. vasario 8 d. Daugiausia prisnigo 1931 m. kovą – sniego dangos storis tuomet siekė 60 cm.[33]

Svarbiausi Panevėžio klimato rodikliai 1991–2020 laikotarpiu pateikti lentelėje:

[slėpti] Panevėžio klimatas 
Mėnuo	Sau	Vas	Kov	Bal	Geg	Bir	Lie	Rgp	Rgs	Spa	Lap	Gru	Metinis
Vid. aukščiausia °C	−0,8	0	4,8	12,6	18,5	21,7	24,1	23,3	17,8	10,7	4,6	0,7	11,5
Vid. temperatūra °C	−3,1	−2,8	0,9	7,4	12,8	16,3	18,6	17,6	12,7	7,0	2,4	−1,3	7,4
Vid. žemiausia °C	−5,6	−5,6	−2,6	2,4	7	10,7	13,2	12,4	8,3	3,9	0,3	−3,5	3,4
Krituliai mm	41	33	33	37	51	64	83	65	50	58	48	45	608
Duomenys: Panevėžys[31]
Panevėžiui priklauso keletas Lietuvos klimato rekordų: 1969 m. vasario 8–11 d. mieste siautė ilgiausia Lietuvoje pūga, kuri truko 78 val. 25 min., – vėjo greitis pūgos metu siekė 16 m/s, gūsiuose – iki 20 m/s. Per lijundrą 1977 m. balandžio 12–14 d. Panevėžyje ãpšalo skersmuo ant elektros perdavimo linijų siekė 175 mm. 1972 m. rugsėjo 28 d. mieste iškrito anksčiausias sniegas Lietuvoje. 1998 m. Panevėžyje iškrito Lietuvos liepos mėnesio kritulių rekordas – 277,6 mm.[34]

Architektūra
Pagrindinis straipsnis – Panevėžio architektūra.

Laisvės aikštė ir Ramygalos gatvė 2023 m.

Miesto centras ir Senvagė 2006 m.
Miesto planas mišrus – senoji dalis su centru turi spindulinį, naujieji rajonai – stačiakampį ir linijinį gatvių tinklą. Pagrindinės miesto gatvės – Smėlynės ir J. Basanavičiaus, kertančios miesto teritoriją iš šiaurės į pietus, bei Klaipėdos ir Vilniaus gatvės – iš vakarų į rytus. Miesto centrinę dalį juosia Nemuno, S. Kerbedžio ir J. Biliūno gatvės, vakarinę ir šiaurinę – Vakarinė, Pramonės bei Šiaurinė gatvės. Link Kupiškio eina Senamiesčio gatvė, link Anykščių – Velžio kelias, link Krekenavos – J. Tilvyčio, link Joniškėlio – Pušaloto gatvė. Pramonės įmones jungia J. Janonio ir Tinklų gatvės. Miesto senojoje dalyje svarbesnės Respublikos, Ramygalos, Vasario 16-osios, Elektros, Ukmergės, Kranto, A. Smetonos gatvės. Laisvės aikštė – pagrindinė ir seniausia mieste.[35]

Dabartinis Panevėžio miestovaizdis susiformavo sovietmečiu: miestas plėtotas pagal 1947 m. (architektas Kazys Šešelgis), 1962 m. (architektė Irena Marija Daujotaitė ir kiti) ir 1973 m. (architektas V. Bugailiškis ir kiti) bendruosius planus.[36] Senoji miesto dalis – Senasis ir Naujasis Panevėžys bei buvęs Mikolajevo miestelis (Smėlynė) – yra abipus Nevėžio.[13] Aplink ją išsidėstę individualių namų bei ankstyvojo sovietmečio daugiabučių namų kvartalai. Toliau nuo centro yra vėliau sovietmečiu pastatyti daugiabučių mikrorajonai: vakaruose – Tulpių, Klaipėdos ir Kniaudiškių, pietvakariuose – Pilėnų, pietryčiuose – Žemaičių. Miesto šiaurės vakarinėje ir šiaurės rytinėje dalyje įrengtos pramoninės zonos, šiaurėje, už geležinkelio, plyti nemažas Rožyno individualių namų rajonas. Nemažai naujesnių individualių namų kvartalų įsikūrę ir miesto pietinėje dalyje. Pagrindinės poilsio zonos išsidėsčiusios palei Nevėžį: miesto centre įrengtas Senvagės skveras, į šiaurę nuo centro – Jaunimo sodas, rytuose – seniausias mieste Skaistakalnio parkas, vakaruose – Kultūros ir poilsio parkas. Molainių gatvėje, šalia Kniaudiškių mikrorajono, atidarytas naujas Kniaudiškių parkas.[37]


Panevėžio katedra
Ryškaus architektūrinio identiteto Panevėžys neturi, jo architektūrai būdingi skirtingų stilių ir laikotarpių, aiškios vienumos neformuojantys pastatai.[38] Seniausias mieste – renesansinis Upytės pavieto teismo archyvo pastatas (XVII a.). Kiti pastatai žymiai jaunesni: klasicistinė Švč. Trejybės bažnyčia (1803 m.), medinė Evangelikų liuteronų bažnyčia (1850 m.). Istorizmo stiliumi pastatyta Šv. apaštalų Petro ir Povilo („Raudonoji”) bažnyčia, Panevėžio mokytojų seminarija (Klaipėdos g. 3), Panevėžio realinė mokykla (dabar J. Balčikonio gimnazija), Michaelio Rosako namas (Laisvės a. 1), medinė Kristaus Prisikėlimo cerkvė (visi XIX a. pab.). Žymesni XX a. pradžios pastatai: neoklasicistiniai su moderno bruožais Panevėžio kredito draugijos rūmai (1915 m., dabar Panevėžio apskrities Gabrielės Petkevičaitės-Bitės viešoji biblioteka), Panevėžio chasidų sinagoga (1910 m.), modernizuotų neobaroko formų Kristaus Karaliaus katedra (1929 m.), modernistiniai Lietuvos banko skyriaus rūmai (1930 m.), Švč. Mergelės Marijos Nekaltojo Prasidėjimo koplyčia (1939 m.), Apskrities savivaldybės rūmai (1940 m., A. Jakšto g. 4), medinė Česlovo Petraškevičiaus vila (dabar Panevėžio gamtos mokykla). Originalesni sovietmečio statiniai: Panevėžio sporto centro kompleksas (1965 m.), Panevėžio dramos teatro rūmai (1967 m.), viešbutis „Nevėžis” (1972 m.), kino teatras „Versmė” (1979 m.), „Ekrano” kultūros rūmai (1987 m., Kranto g. 28), Santuokų rūmai (1987 m.), Informacinio skaičiavimo centro pastatas (1989 m.), Panevėžio dailės galerija (1990 m.). Atkūrus Lietuvos nepriklausomybę pastatytas „Sodros” Panevėžio skyriaus pastatas (1995 m.), Dievo apvaizdos seserų kongregacijos vienuolynas (1997 m.), SEB banko pastatas (1998 m., Ukmergės g. 20),[39] XXI a. – Naujoji Apaštalų bažnyčia (2001 m.), universali daugiafunkcė Panevėžio arena (2008 m.), Stasio Eidrigevičiaus menų centras (2024 m.), Panevėžio autobusų stotis (2025 m.) ir kiti visuomeniniai bei prekybiniai pastatai.[36]

Gyventojai
Demografinė raida
1897 m. pirmojo visuotinio Rusijos imperijos gyventojų surašymo duomenimis, Panevėžyje gyveno 6503 vyrai ir 6465 moterys, iš viso 12 968 gyventojai. Apie pusę gyventojų tuo metu sudarė žydai. Prieš Pirmąjį pasaulinį karą mieste jau gyveno apie 14 000 gyventojų.

Po Antrojo pasaulinio karo miesto natūrali raida buvo sutrikdyta. Kaip ir kitur Lietuvoje vyko urbanizacijos procesas, žmonės iš mažesnių miestelių perkelti dirbti į miestuose susitelkusią pramonę.

Panevėžyje formuotas stambus pramonės centras, jame 6-8 dešimtmečiais pastatyta daug stambių pramonės įmonių, todėl čia gyventojų skaičius didėjo itin sparčiai. 1959–1979 metais panevėžiečių padaugėjo nuo 41 100 iki 101 500, tai yra, per 20 metų jų padaugėjo 2,4 karto. Populiacijos augimo tempai išliko aukšti ir 1979–1990 m., kai gyventojų padaugėjo dar 1,28 karto, jų skaičius pasiekė 130 000. Vėliau dėl emigracijos gyventojų skaičius sumažėjo.

Demografinė raida tarp 1804 m. ir 2022 m.
1804 m.	1823 m.	1833 m.	1857 m.	1865 m.[3]	1897 m.sur.	1898 m.*	1908 m.	1913 m.	1923 m.sur.[40]
800	2 000	3 700	5 908	8 071	12 968	13 044	15 028	13 894	19 197
1931 m.	1939 m.	1945 m.	1959 m.sur.[41]	1967 m.	1970 m.sur.[41]	1979 m.sur.[42]	1981 m.[43]	1986 m.[13]	1989 m.sur.[44]
20 562	26 653	12 000	41 100	64 700	74 497	102 303	106 500	118 900	126 483
1991 m.	2001 m.sur.[45]	2006 m.	2008 m.	2011 m.sur.[46]	2014 m.	2018 m.	2021 m.sur.[47]	2022 m.	-
131 200	119 749	115 315	113 653	99 690	96 328	98 258	89 100	88 380	-
* pagal enciklopedijos išleidimo metus. Metai, kurių duomenys pateikti enciklopedijoje, nenurodyti.
[rodyti]Demografinės raidos histograma
Tautinė sudėtis
2011 m. gyveno 99 690 žmonių:[48]

Lietuviai – 96,11 % (95812);
Rusai – 2,44 % (2434);
Ukrainiečiai – 0,3 % (303);
Lenkai – 0,18 % (180);
Baltarusiai – 0,18 % (175);
Čigonai – 0,1 % (96);
Latviai – 0,04 % (44);
Vokiečiai – 0,03 % (31);
Žydai – 0,02 % (20);
Kiti – 0,6 % (595).
2001 m. gyveno 119 749 žmonės:[49]

Lietuviai – 95,69 % (114585);
Rusai – 2,88 % (3443);
Ukrainiečiai – 0,36 % (427);
Baltarusiai – 0,2 % (241);
Lenkai – 0,19 % (232);
Čigonai – 0,12 % (141);
Latviai – 0,05 % (63);
Vokiečiai – 0,02 % (29);
Žydai – 0,02 % (22);
Kiti – 0,47 % (566).
1923 m. gyveno 19 197 žmonės:[50]

Lietuviai – 53,32 % (10236);
Žydai – 35,66 % (6845);
Lenkai – 5,08 % (976);
Rusai – 3,3 % (633);
Vokiečiai – 0,57 % (109);
Baltarusiai – 0,26 % (50);
Latviai – 0,16 % (30);
Kiti – 1,66 % (318).
1897 m. gyveno 12 968 žmonės:[51]

Žydai – 50,47 % (6545);
Lenkai – 19,58 % (2539);
Rusai – 12,74 % (1652);
Lietuviai-Žemaičiai – 12,13 % (1573);
Vokiečiai – 1,67 % (216);
Totoriai – 0,99 % (129);
Baltarusiai – 0,99 % (128);
Kiti – 1,43 % (186).
Pagal tikybą
Romos katalikai – 79,5 %
stačiatikiai – 1,5 %
sentikiai – 0,4 %
evangelikai reformatai – 0,3 %
evangelikai liuteronai – 0,2 %
kiti – 0,8 %
netikintys/nenurodė – 17,2 %
Žymūs žmonės
Pagrindinis straipsnis – Sąrašas:Iš Panevėžio kilę žymūs žmonės.
Gabrielė Petkevičaitė-Bitė (1861–1943), rašytoja, visuomenės, politikos veikėja.
Šachnelis Abraomas Meras (1865–1930), gydytojas, Panevėžio žydų visuomenės veikėjas
Juozas Balčikonis (1885–1969), kalbininkas, vertėjas.
Joselis Kaganeumanas (1886–1969), Panevėžio ješivos rabinas, Talmudo mokytojas.
Elžbieta Jodinskaitė (1877–1951), pirmoji miesto knygininkė.
Mykolas Karka (1892–1984), chorvedys, kompozitorius, pedagogas.
Jurgis Elisonas (1889–1946), zoologas, pedagogas, kraštotyrininkas.
Matas Grigonis (1889–1971), poetas, vertėjas, pedagogas.
Jonas Variakojis (1892–1963) Lietuvos karinis ir politinis veikėjas, Lietuvos kariuomenės kūrėjas, pulkininkas leitenantas.
Salomėja Nėris (1904–1945), poetė.
Juozas Miltinis (1907–1994), teatro režisierius, aktorius.
Vilhelmas Variakojis (1912–1988), stalo tenisininkas, krepšininkas, treneris.
Antanas Belazaras (1913–1976), kompozitorius, pedagogas.
Steponas Kosmauskas (1918–1985), teatro ir kino aktorius.
Vaclovas Blėdis (1920–1999), teatro ir kino aktorius, teatro režisierius.
Bronius Babkauskas (1921–1975), teatro ir kino aktorius.
Jonas Juodelis (1921–2006), kunigas, teologijos daktaras, visuomenės veikėjas, poliglotas.
Gediminas Karka (1922–1991), teatro ir kino aktorius.
Eugenija Šulgaitė-Karkienė (1923–2014), teatro ir kino aktorė.
Donatas Banionis (1924–2014), teatro, kino, televizijos aktorius ir režisierius.
Mykolas Sluckis (1928–2013), rašytojas.
Algirdas Ničius (1929–2025), kino dailininkas.
Algimantas Masiulis (1931–2008), teatro ir kino aktorius.
Algimantas Čekuolis (1931–2025), žurnalistas, rašytojas, keliautojas.
Stasys Petronaitis (1932–2016), teatro ir kino aktorius.
Stanislovas Algis Kavaliauskas (1938–2020), dviratininkas.
Donatas Pečiūra (1938–2023), kino operatorius.
Algirdas Alionis (1940–2021), poetas, prozininkas.
Vidmantas Bačiulis (1940–2022), kino ir televizijos režisierius, scenaristas.
Stasys Kropas (g. 1953 m.), ekonomistas, signataras, Lietuvos bankų asociacijos prezidentas.
Albinas Kėleris (g. 1957 m.), teatro ir kino aktorius, režisierius.
Algimantas Aleksandravičius (g. 1960 m.), fotomenininkas.
Daiva Rudokaitė (1969–2023), aktorė, psichologė.
Ekonomika

AB „Panevėžio stiklas“
2024 m. duomenimis, mieste veikė 5698 įmonės, jose dirbo 41 186 darbuotojai.[52] Svarbiausios ūkio šakos – didmeninė ir mažmeninė prekyba, paslaugos ir administravimas, apdirbamoji pramonė, transportas ir statyba.[53]

Mieste veikia mašinų gamybos, metalo apdirbimo, elektronikos, chemijos, stiklo, medienos dirbinių, popieriaus, tekstilės, maisto ir kitos pramonės įmonės. Gaminami kėbulai ir priekabos („Schmitz Cargobull Baltic”), automobilių kompresoriai („Panevėžio Aurida”), transporto priemonių elektromechaninės sistemos („PKC Group”, „AQ Wiring Systems”), elektrotechniniai įrenginiai („Harju Elekter”, „Automatikos sistemos”), laidai ir kabeliai („Lietkabelis”), elektriniai radiatoriai („Adax”), metalo dirbiniai („Metalistas”), paneliai vonios kambariams, durims, laivams („Norac”), plastikai ir guma („Stigma”), stiklas ir jo gaminiai („Panevėžio stiklas”), baldai („Ekornes Lithuania”, „Multimeda”, „Hjellegjerde Baltija”), spaudos, pakavimo medžiagos („IOCO Packaging”), tekstilės dirbiniai („Devold”, „Linas”), maisto produktai ir gėrimai („Roquette Amilina”, „Kalnapilio-Tauro grupė”, „Viking Malt”, „Panevėžio pienas”, „OMG Bubble Tea”) bei kiti gaminiai.[54][52]


UAB „Panevėžio Aurida“ administracinis pastatas
Didžiausios statybų bendrovės – „Panevėžio statybos trestas”, „Hisk”, „Kelias”, „Tetas”, „PST Group”; projektavimo – „Panevėžio miestprojektas”; prekybos – „Linas Agro” (žemės ūkio produktai), „Elektrokomplektas” (elektros laidai, šviestuvai), „Alvas ir Ko” (maisto prekės), „Naftėnas” (naftos produktai), „Specagra” (žemės ūkio technika), „Vestey Foods Baltics” (maisto prekės), „Litforina” (mediena), „Jaukurai” (santechnikos įranga), „Lėvuo” (drabužiai), „Egzotika” (padangos) ir kitos.[54][52] Elektros ir šilumos energiją gamina termofikacinė elektrinė, ją eksploatuoja bendrovė „Panevėžio energija”.[53] Geriamąjį vandenį tiekia ir nuotekas tvarko „Aukštaitijos vandenys”.[55]

Didžiausi Panevėžio darbdaviai – Respublikinė Panevėžio ligoninė (2136 darbuotojai, 2024 m.), „PKC Group Lithuania” (1738), „AQ Wiring Systems” (1191), Valstybinio socialinio draudimo fondo valdybos Panevėžio skyrius (741), „Schmitz Cargobull Baltic” (602).[52]

Mieste veikia Panevėžio prekybos, pramonės ir amatų rūmai, Mokslo ir technologijų parkas, Norvegijos pramonės parkas, Mechatronikos centras.[53] Miesto vakariniame pakraštyje, prie aplinkkelio, įsteigta 47 ha ploto laisvoji ekonominė zona.[56]

Transportas
Panevėžį kerta Radviliškio–Daugpilio geležinkelis, veikia Panevėžio geležinkelio stotis. 2025 m. duomenimis, maršrutu Panevėžys–Mažeikiai kursuoja keleiviniai traukiniai.[57] Išlikusi siaurojo geležinkelio linija į Rubikius, ja kursuoja turistiniai traukiniai.[58] Pro Panevėžį (į vakarus nuo miesto) ruošiamasi tiesti europinės vėžės (1435 mm) greitąjį geležinkelį „Rail Baltica”. Miesto pakraštyje, šalia aplinkkelio ir plento į Šiaulius sankryžos numatyta pastatyti keleivinę stotį.[59]

Pro Panevėžį, aplinkkeliu, Rygos ir Kauno kryptimis, eina tarptautinė „Via Baltica” automobilių magistralė; autostrada jungia miestą su Vilniumi, plentai su Šiauliais, Rokiškiu, Biržais, Anykščiais ir Kėdainiais. Miesto centre, Savanorių aikštėje, veikia Panevėžio autobusų stotis (atidaryta 2025 m.).[60] Viešąjį miesto transportą sudaro autobusai bei jų maršrutų tinklas. 2025 m. duomenimis, veikia 19 dieninių ir du naktiniai autobusų maršrutai,[61] juos aptarnauja bendrovė „Panevėžio autobusų parkas”.[62]

Pietinėje miesto dalyje yra civilinis gruntinis aerodromas, skirtas bendrajai aviacijai,[63] už miesto, Pajuostyje – karinis Pajuosčio aerodromas.

Tiltai
Tiltai per Nevėžį
Map
Wikimedia | © OpenStreetMap
[Interactive fullscreen map]
Per miestą pratekantį Nevėžį nutiesti automobilių transporto ir pėsčiųjų tiltai, tarp kurių, įskaitant priemiesčius (pasroviui):

Pajuosčio tiltas
Ekrano marių tiltas (su užtvanka)
Skaistakalnio tiltas (pėsčiųjų)
Smėlynės gatvės tiltas (buvęs arkinis „Laisvės“ tiltas)
Jakšto gatvės tiltas (pėsčiųjų)
Respublikos tiltas
Komunikacijų tiltas
Nemuno gatvės tiltas (su estakada)
Kultūros ir poilsio parko tiltas (pėsčiųjų)
Savitiškio tiltas (su užtvanka)
Nausodės tiltas (vakariniame aplinkkelyje)
Švietimas

Panevėžio kolegija
2025 m. duomenimis, Panevėžyje yra 55 vaikų ir suaugusiųjų švietimo įstaigos. Ikimokyklinis ugdymas vykdomas 29 lopšeliuose-darželiuose ir Specialiojoje mokykloje-daugiafunkciame centre. Be to, veikia vienas privatus lopšelis-darželis ir viešoji ikimokyklinio ir priešmokyklinio ugdymo įstaiga „Šermukšniukas”. Bendrąjį ugdymą užtikrina 1 pradinė ir 1 pagrindinė mokykla, 9 progimnazijos, 8 gimnazijos (Juozo Balčikonio, Vytauto Žemkalnio, Penktoji, Juozo Miltinio, „Minties” inžinerijos, Kazimiero Paltaroko, Raimondo Sargūno sporto ir Vytauto Mikalausko menų),[64] suaugusiųjų ir jaunimo mokymo centras, „Šviesos” ugdymo centras. Neformalusis vaikų švietimas prieinamas gamtos mokykloje, moksleivių namuose, dailės ir muzikos mokyklose bei Panevėžio švietimo centro padaliniuose. Profesinį mokymą teikia Panevėžio mokymo centras.[65]

Panevėžys yra didžiausias Lietuvos miestas, neturintis universiteto. Aukštąjį išsilavinimą mieste teikia Panevėžio kolegija, Kauno technologijos universiteto Panevėžio technologijos ir verslo fakultetas[66] bei Lietuvos edukologijos universiteto Sporto ir sveikatos fakulteto Panevėžio grupė. Pedagogų kvalifikacija tobulinama Panevėžio švietimo centre.[65]

Kultūra

Juozo Miltinio dramos teatras
2025 m. duomenimis, Panevėžyje yra dvi valstybinės, devynios miesto savivaldybei ir viena rajono savivaldybei priklausančios kultūros ir meno įstaigos.[67][68]

Veikia keturi teatrai, iš jų žymiausias – Juozo Miltinio dramos teatras, įsteigtas 1940 m. Nuo 1967 m. teatras įsikūręs specialiai jam suprojektuotame pastate Laisvės a. 5.[69] Panevėžio muzikinis teatras – didžiausia kultūros įstaiga Aukštaitijos regione su daugiau nei šimtu scenos meno darbuotojų. Įkurtas 1993 m., turi simfoninį orkestrą, pučiamųjų instrumentų orkestrą, styginių kvartetą, chorą. Veikia buvusio kino teatro „Versmė” pastate Nepriklausomybės a. 8.[70] Panevėžio lėlių vežimo teatras – vienintelis toks Lietuvoje, įkurtas 1986 m., veikia pastate Respublikos g. 30.[71] Panevėžio teatras „Menas” įkurtas 1991 m., veikia buvusio kino teatro „Menas” pastate Vasario 16-osios g. 19.[72] Klaipėdos g. 146 veikia Kino centras „Garsas”.[73]

Mieste yra du muziejai – Panevėžio kraštotyros muziejus ir „Stasys Museum”. Kraštotyros muziejus įkurtas 1925 m., fonduose turi daugiau kaip 116 400 eksponatų (2020 m.). Veikia buvusiuose Moigių namuose Vasario 16-osios g. 23.[74] „Stasys Museum” – šiuolaikinio meno muziejus, skirtas menininkui multifunkcionalistui Stasiui Eidrigevičiui. Atidarytas 2024 m. naujame pastate Respublikos g. 40. Skaistakalnyje veikia muziejaus padalinys – kūrybiškumo centras „Pragiedruliai”, įsikūręs renovuotoje poeto Juozo Čerkeso-Besparnio sodyboje.[67]


Panevėžio apskrities Gabrielės Petkevičaitės-Bitės viešosios bibliotekos interjeras
Panevėžio apskrities Gabrielės Petkevičaitės-Bitės viešoji biblioteka – didžiausia mieste. Joje saugoma apie 450 000 dokumentų, tarp jų daugiau kaip 20 000 rankraštinių. Įsteigta 1921 m. („Aido” kultūros draugijos Panevėžio skyrius), įsikūrusi 2003–2006 m. rekonstruotame pastatų komplekse Respublikos g. 14. Bibliotekai priklauso Juozo Miltinio memorialinis butas Algirdo g. 54-19.[75] Panevėžio Elenos Mezginaitės viešoji biblioteka – miesto biblioteka, įsteigta 1989 m., įsikūrusi Topolių al. 12.[76] Biblioteka turi 8 filialus įvairiose miesto vietose.[77] Beržų g. 50 veikia Panevėžio rajono savivaldybės viešoji biblioteka, įkurta 1951 m. Bibliotekai priklauso rašytojo Mato Grigonio namas Koldingo g. 12, kuriame įrengta literatūrinė ekspozicija.[78]


Šiuolaikinio meno muziejus „Stasys Museum”
Didžiausias vizualiojo meno centras mieste – Panevėžio miesto dailės galerija Respublikos g. 3. Įkurta 1990 m.,[79] turi tris padalinius: Dailės galeriją, Keramikos paviljoną ir Fotografijos galeriją (Vasario 16-osios g. 11).[80] Kitos mieste veikiančios meno galerijos: „Galerija XX” Laisvės a. 7, „A Galerija”, „Menų namai” Ramygalos g. 30 (2025 m. duomenys).[73]

Kranto g. 28 stovi Panevėžio kultūros centras – vienas didžiausių daugiafunkcių kultūros centrų Lietuvoje. 2024 m. duomenimis, jame yra Didžioji salė su 625 vietomis, Mažoji salė su scena ir 200 vietų, Renginių salė su 300 vietų, Konferencijų salė, repeticijų kambariai, kabinetai darbuotojams. Užsiimama įvairia kultūrine veikla, vyksta teatro, muzikos, šokio, edukacijos ir kiti renginiai.[81] Atidarytas 1987 m. kaip Panevėžio „Ekrano” gamyklos kultūros rūmai.[82]

Mieste vyksta tarptautiniai keramikos ir akmens skulptūrų simpoziumai, tarptautinis meninio stiklo simpoziumas „GlassJazz“,[83] literatūrinės žiemos, kamerinių spektaklių, lėlių teatrų festivaliai, pučiamųjų orkestrų čempionatai, fotografijų parodos.[67] Nuo 2002 m. kasmet vyksta tarptautinis vaikų ir jaunimo džiazo muzikos festivalis-konkursas „Jazz fontanas“.[84] Leidžiami laikraščiai „Sekundė” (dienraštis), „Panevėžio kraštas” (dukart per savaitę), „Panevėžio balsas” (savaitraštis), „Tėvynė” (rajono laikraštis), kultūros žurnalas „Senvagė” (dukart per metus).[85]

Sportas
Dviračių sportas
2012 m. Panevėžyje vyko Europos treko čempionatas.

Futbolas
Panevėžio FK "Panevėžys"
Futbolas Panevėžyje
Panevežio FK „Ekranas“
Miestų partnerystė
Panevėžio miestai-partneriai:[86]

Miestas	Šalis
Liunenas	 Vokietija
Kalmaras	 Švedija
Liublinas	 Lenkija
Koldingas	 Danija
Daugpilis	 Latvija
Gabrovas	 Bulgarija
Rakverė	 Estija
Vinycia	 Ukraina
Maramurešas	 Rumunija
Rustavis	 Gruzija
Tojohašis	 Japonija
Galerija
2008 m.
2008 m.
 
J. Balčikonio gimnazija
J. Balčikonio gimnazija
Literatūra
Algimantas Miškinis, Panevėžio urbanistinė raida iki 1871–1872 m.. Panevėžio istorijos fragmentai, Panevėžys, 1993 m. Nuoroda tikrinta 2025-05-04.
Panevėžys nuo XVI a. iki 1990 m. (sud. Algis Kasperavičius, Kęstutis Gudas). – Panevėžys: Nevėžio spaustuvė, 2003. – 735 p.: iliustr. – ISBN 9955-450-54-1
Panevėžys: miestas, kuriame gyvenu (tekstas Virginijos Januševičienės). – Klaipėda: S. Jokužio leidykla-spaustuvė, 2004. – 20 p.: iliustr. – ISBN 9986-31-118-7
Panevėžio miesto elektrinei – 80 (sud. Joana Viga Čiplytė, Gražvydas Jonas Gudynas). – Vilnius: Homo liber, 2004. – 93 p.: iliustr. – ISBN 9955-449-68-3
Panevėžio menininkų portretas: Panevėžio miesto fotografų fotografijų albumas (sud. Marija Čičirkienė). – Panevėžys: Panevėžio fotografijos galerija, 2004. – 83 p.: iliustr. – ISBN 9955-9745-0-8
Panevėžys – mažasis didmiestis: albumas (nuotraukos Evaldo Ivanausko, Alvydo Ivoškaus, Aido Markevičiaus, Astos Radvenskienės). – Panevėžys: Amalkeros leidyba, 2006. – 48 p.: iliustr. – ISBN 9955-659-17-3
Pirmųjų Panevėžio bažnyčių ir Senamiesčio gatvės istorija (sud. Liudvika Knizikevičienė). – Panevėžys: Panevėžio bendruomenė „Senamiestietis“, 2007. – 318 p.: iliustr. – ISBN 978-9955-9992-0-1
Panevėžio medžiotojų ir žvejų draugijai – 60 (sud. Joana Viga Čiplytė). – Kaunas: Lututė, 2009. – 291 p.: iliustr. – ISBN 978-9955-37-083-3
Panevėžio medicinos istorija (sud. Liudvika Knizikevičienė). – Panevėžys: ARG ofsetas, 2010. – 256 p.: iliustr. – ISBN 978-9955-741-28-2
Šaltiniai
 Aldonas Pupkis, Marija Razmukaitė, Rita Miliūnaitė. Vietovardžių žodynas. – Vilnius, Mokslo ir enciklopedijų leidybos institutas, 2002. ISBN 5-420-01497-1. // (internetinis leidimas) [sudarytojai Marija Razmukaitė, Aldonas Pupkis]. ISBN 978-9955-704-23-2.
 Поневѣжъ. Энциклопедический словарь Брокгауза и Ефрона, Т. 24А (48) : Полярные сияния — Прая. С.-Петербургъ, 1898., 525 psl. (rus.)
 Географическо-статистический словарь Российской империи, T. 4 (Павастерортъ — Сятра-Касы). СПб, 1868, 182 psl.
 Aleksandras Vanagas. „Lietuvos miestų vardai“ (antrasis leidimas). – Vilnius, Mokslo ir enciklopedijų leidybos institutas, 2004. // psl. 155–156
 Algirdas Sabaliauskas. „Iš kur jie?“ – Vilnius, Lietuvių kalbos institutas, 1994. // psl. 249.
 Istorija, Panevėžio miesto savivaldybė. Nuoroda tikrinta 2025-03-01.
 Miškinis, p. 21
 Miškinis, p. 23
 Elena Markuckytė, Panevėžio istorija, Visuotinė lietuvių enciklopedija, 2024-05-24. Nuoroda tikrinta 2025-03-01.
 Miškinis, p. 23, 24
 Miškinis, p. 24, 25
 Miškinis, p. 27–30
 Ona Maksimaitienė, Algimantas Miškinis ir kiti. Panevėžys. Tarybų Lietuvos enciklopedija, T. 3 (Masaitis-Simno). – Vilnius: Vyriausioji enciklopedijų redakcija, 1987. // psl. 295–298
 Panevėžio kraštas Pirmojo pasaulinio karo metais (1914–1918), Panevėžio kraštas virtualiai, 2014-08-07. Nuoroda tikrinta 2025-05-04.
 Donatas Pilkauskas, Kovos su bolševikais dėl Panevėžio 1919 m., Panevėžio kraštas virtualiai, 2017-03-13. Nuoroda tikrinta 2025-05-03.
 Vitalija Jalianiauskienė, Panevėžį augino malūnai, Sekundė, 2024-06-15. Nuoroda tikrinta 2025-03-01.
 Vaidas Petrulis, Lietuvos miestų ir miestelių modernizacija: Panevėžys, Bernardinai.lt, 2020 m. balandžio 24 d. Nuoroda tikrinta 2025-05-04.
 Panevėžio miesto istorija, We love Lithuania, 2021-07-07. Nuoroda tikrinta 2025-05-04.
 Inga Kontrimavičiūtė, Kariniame dalinyje statybų maratonas, Sekundė, 2022-12-03. Nuoroda tikrinta 2025-05-04.
 Kaip augo Panevėžys, Sekundė, 2023-09-04. Nuoroda tikrinta 2025-05-04.
 Pasirašyta sutartis dėl Panevėžio centrinės aikštės atnaujinimo antro etapo, Statyba ir architektūra, 2020-08-03. Nuoroda tikrinta 2025-05-04.
 Emilija Juškienė, Miesto gatves apraizgę vandentiekio tinklai, Panevėžio kraštas virtualiai, 2022-02-28. Nuoroda tikrinta 2025-05-04.
 Algirdas Rainys, Nevėžis, Visuotinė lietuvių enciklopedija, 2022-01-26. Nuoroda tikrinta 2025-05-04.
 Algirdas Rainys. Nevėžis. Tarybų Lietuvos enciklopedija, T. 3 (Masaitis-Simno). – Vilnius: Vyriausioji enciklopedijų redakcija, 1987. // psl. 211
 Vitalija Jalianiauskienė, Savitiškyje – su mintimis apie Čičinską, Sekundė, 2023-10-29. Nuoroda tikrinta 2025-05-04.
 Daiva Savickienė, Užtvanką ruošia istoriniam remontui, Sekundė, 2021-06-13. Nuoroda tikrinta 2025-05-04.
 Emilija Juškienė, Kai Senvagė keitė miesto veidą, Panevėžio kraštas virtualiai, 2019-03-25. Nuoroda tikrinta 2025-05-04.
 Nendrė, Varnaitis, Vilktupis ir kiti, Panevėžio kraštas virtualiai, 2022-09-12. Nuoroda tikrinta 2025-05-04.
 N-35-1-D-c ir N-35-1-D-d, 1951 m. Susudata.de. Nuoroda tikrinta 2025-05-04.
 Arūnas Bukantis. Klimatas. Visuotinė lietuvių enciklopedija, T. XII (Lietuva). – Vilnius: Mokslo ir enciklopedijų leidybos institutas, 2007. 48 psl.
 Klimato duomenys, Lietuvos hidrometeorologijos tarnyba. Nuoroda tikrinta 2025-05-04.
 Alinantis karštis panevėžiečius guldo į ligoninę (Panevėžyje karščio rekordas užfiksuotas 1992 m.), Jūsų Panevėžys, 2018-07-30. Nuoroda tikrinta 2025-05-04.
 Žiemos rekordai, Panevėžio kraštas virtualiai, 2022-12-26. Nuoroda tikrinta 2025-05-04.
 Mėnesių ekstremumai, Lietuvos hidrometeorologijos tarnyba. Nuoroda tikrinta 2025-05-04.
 Daiva Savickienė, Miestas ant Nevėžio: matęs kryžiuočius, išpirktas ir Maestro paviliojęs, Sekundė, 2020-09-05. Nuoroda tikrinta 2025-05-04.
 Panevėžio architektūra, Visuotinė lietuvių enciklopedija, 2024-09-09. Nuoroda tikrinta 2025-05-04.
 Kniaudiškių parkas, Panevėžio plėtros agentūra. Nuoroda tikrinta 2025-05-04.
 Naujas architektūros festivalis kvies prakalbinti Panevėžio pastatus, Bernardinai.lt, 2020-09-07. Nuoroda tikrinta 2025-05-04.
 Inga Kontrimavičiūtė, „Sekundė“, Naują erą Panevėžyje žymėjęs pastatas nesulaukia pirkėjo, DELFI Miestai, 2018-12-20. Nuoroda tikrinta 2025-05-04.
 Lietuvos apgyventos vietos: pirmojo visuotinojo Lietuvos gyventojų 1923 m. surašymo duomenys. Kaunas: Finansų ministerija. Centralinis statistikos biūras, 1925.
 Lietuvos TSR kaimo gyvenamosios vietovės 1959 ir 1970 metais (Visasąjunginių gyventojų surašymų duomenys). Vilnius: Centrinė statistikos valdyba prie Lietuvos TSR Ministrų tarybos, 1974.
 Lietuvos TSR kaimo gyvenamosios vietovės (1979 metų Visasąjunginio gyventojų surašymo duomenys). Vilnius: Lietuvos TSR Centrinė statistikos valdyba, 1982.
 Panevėžys. Lietuviškoji tarybinė enciklopedija, VIII t. Vilnius: Mokslo ir enciklopedijų leidybos institutas, 1981. T.VIII: Moreasas-Pinturikjas, 441 psl.
 Kaimo gyvenamosios vietovės (1989 metų Visuotinio gyventojų surašymo duomenys). Vilnius: Lietuvos Respublikos Statistikos departamentas, 1993.
 Panevėžio apskrities gyvenamosios vietovės ir jų gyventojai. Vilnius: Statistikos departamentas, 2003.
 Gyventojai gyvenamosiose vietovėse: Lietuvos Respublikos 2011 metų gyventojų ir būstų surašymo rezultatai. Vilnius: Statistikos departamentas, 2013. Suarchyvuota 2022-04-08.
 Gyventojai gyvenamosiose vietovėse: Lietuvos Respublikos 2021 metų gyventojų surašymo rezultatai. Vilnius: Statistikos departamentas, 2022.
 2011 m. surašymo duomenys Archyvuota kopija 2021-10-28 iš Wayback Machine projekto.
 2001 m. surašymo duomenys Archyvuota kopija 2016-03-06 iš Wayback Machine projekto.
 1923 m. surašymo duomenys
 1897 m. surašymo duomenys (rus.)
 Panevėžio m. sav. verslo informacija, Scortis.lt, 2024 m. Nuoroda tikrinta 2025-05-03.
 Panevėžys, Visuotinė lietuvių enciklopedija, 2024-12-13. Nuoroda tikrinta 2025-05-04.
 Didžiausios įmonės, Panevėžio miesto savivaldybė. Nuoroda tikrinta 2025-05-03.
 Apie mus, Aukštaitijos vandenys. Nuoroda tikrinta 2025-05-03.
 Panevėžio laisvoji ekonominė zona. Vieta verslui, Panevėžio miesto savivaldybė, 2023-04-24. Nuoroda tikrinta 2025-05-03.
 Maršrutų žemėlapis, LTG Link. Nuoroda tikrinta 2025-05-03.
 Keleivių vežimo užsakomaisiai reisais ir teikiamų paslaugų kainos, Aukštaitijos siaurasis geležinkelis. Nuoroda tikrinta 2025-05-03.
 Patvirtinta „Rail Balticos” geležinkelio vėžės Panevėžio regione alternatyva, Rail Baltica, 2023-10-18. Nuoroda tikrinta 2025-05-03.
 Panevėžyje atidaryta naujoji autobusų stotis, LRT, 2025-04-08. Nuoroda tikrinta 2025-05-03.
 Maršrutų tvarkaraščiai, Stops.lt. Nuoroda tikrinta 2025-05-03.
 Apie mus, Panevėžio autobusų parkas. Nuoroda tikrinta 2025-05-03.
 Aerodromas, Panevėžio aeroklubas. Nuoroda tikrinta 2025-05-03.
 Gimnazijos, Panevėžio miesto savivaldybė, 2025-01-16. Nuoroda tikrinta 2025-05-04.
 Švietimas, Panevėžio miesto savivaldybė. Nuoroda tikrinta 2025-05-04.
 Liepa Žeromskaitė, Atviros durys: universiteto neturintis Panevėžys ieško naujų būdų ugdyti talentus, IQ, 2020-10-17. Nuoroda tikrinta 2025-05-03.
 Kultūra, Panevėžio miesto savivaldybė. Nuoroda tikrinta 2025-05-07.
 Panevėžio rajono kultūros įstaigos, Panevėžio rajono savivaldybė. Nuoroda tikrinta 2025-05-10.
 Leonas Kaziukonis, Apie Juozą Miltinį ir naujų teatro rūmų statybą, Panevėžio kraštas virtualiai, 2017-03-14. Nuoroda tikrinta 2025-05-07.
 Panevėžio muzikinis teatras, Panevėžio plėtros agentūra. Nuoroda tikrinta 2025-05-07.
 Tomas Mizgirdas, Panevėžio lėlių teatras prasidėjo nuo kumelaitės Džiuljetos traukiamo vežimo, LRT, 2023-04-14. Nuoroda tikrinta 2025-05-07.
 Panevėžio teatras „Menas”, Pastatai kalba. Nuoroda tikrinta 2025-05-07.
 Kultūros įstaigos, Panevėžio miesto savivaldybė. Nuoroda tikrinta 2025-05-07.
 Valentina Žigienė, Panevėžio kraštotyros muziejus, Visuotinė lietuvių enciklopedija, 2022-09-06. Nuoroda tikrinta 2025-05-07.
 Panevėžio apskrities Gabrielės Petkevičaitės-Bitės viešoji biblioteka, Visuotinė lietuvių enciklopedija, 2024-04-22. Nuoroda tikrinta 2025-05-07.
 Istorija, Panevėžio Elenos Mezginaitės viešoji biblioteka. Nuoroda tikrinta 2025-05-07.
 Bibliotekos, Panevėžio Elenos Mezginaitės viešoji biblioteka. Nuoroda tikrinta 2025-05-07.
 Apie mus, Panevėžio rajono savivaldybės viešoji biblioteka. Nuoroda tikrinta 2025-05-07.
 Apie galeriją, Panevėžio miesto dailės galerija. Nuoroda tikrinta 2025-05-07.
 Kultūros įstaigų bičiulystė senamiesčio širdyje: atsinaujinusi Panevėžio miesto dailės galerija ir Bitės biblioteka, Panevėžio apskrities Gabrielės Petkevičaitės-Bitės viešoji biblioteka, 2020-09-16. Nuoroda tikrinta 2025-05-07.
 Panevėžio kultūros centras, Panevėžio plėtros agentūra. Nuoroda tikrinta 2025-05-07.
 Panevėžio kultūros centras, Panevėžio kraštas virtualiai. Nuoroda tikrinta 2025-05-07.
 Tarptautinis meninio stiklo simpoziumas „GlassJazz“ Panevėžyje, Artnews.lt, 2024-09-23. Nuoroda tikrinta 2025-05-08.
 Raimonda Mikučionytė, Panevėžyje vėl skambės festivalis „Jazz fontanas”, Jūsų Panevėžys, 2024-05-09. Nuoroda tikrinta 2025-05-08.
 Prenumerata, Lietuvos paštas. Nuoroda tikrinta 2025-05-07.
 Miestai partneriai Archyvuota kopija 2021-04-30 iš Wayback Machine projekto., Panevėžio miesto savivaldybė, 2022-03-04. Nuoroda tikrinta 2022-06-06.
Nuorodos
Panevėžys. Mūsų Lietuva, T. 2. – Bostonas: Lietuvių enciklopedijos leidykla, 1965. – 556 psl.
Oficialus miesto puslapis Archyvuota kopija 2011-12-10 iš Wayback Machine projekto.
Panevėžio krašto naujienos
Panevėžio žemėlapis
Panevėžio istorija
Panevėžys iš oro 1944 m. gruodžio 23 d. Archyvuota kopija 2014-03-22 iš Wayback Machine projekto.
Travel.lt
Religija
Buvęs pijorų vienuolynas Archyvuota kopija 2006-09-09 iš Wayback Machine projekto.
Liuteronų parapija
Reformatų parapija Archyvuota kopija 2009-02-17 iš Wayback Machine projekto.
Panevėžio sentikiai Archyvuota kopija 2015-05-10 iš Wayback Machine projekto.
```

**failas_output.txt**:
```
a 29
abipus 3
administracin�s 2
aerodromas 3
agent�ra 3
agienis 2
aido 4
aik�t 4
aik�t�je 2
aik�t�s 3
aktor 2
aktorius 9
albumas 2
aldonas 2
aleksandras 2
algimantas 5
algirdas 5
algis 2
alia 5
altiniuose 2
amat 2
am�iaus 3
ant 2
antroje 2
antrojo 2
apa�tal 2
apie 15
aplinkkelio 2
apskrities 14
aq 2
architektas 2
architekt�ra 4
archyvo 2
archyvuota 8
armija 4
armijai 2
atidaryta 5
atidarytas 4
atkurta 2
atsitrauk 2
augo 2
auk�taitijos 4
aurida 2
autobus 7
automobili 3
aviacijos 2
baland�io 3
baltarusiai 4
baltic 2
baltica 3
bal�ikonio 4
banko 2
ba�ny�i 3
ba�ny�ia 11
be 3
bei 13
bendrov 2
bendrov�s 2
bernardinai.lt 2
beveik 3
biblioteka 13
bibliotekai 2
bibliotekos 2
bir�elio 2
buvo 11
buvusio 3
buvusios 2
buv�s 4
b�rys 2
c 8
cargobull 2
centras 17
centre 5
centrin 3
centrin�s 3
centro 6
centru 5
chor 2
cukraus 2
d 17
dabar 4
dabartinis 2
dail�s 7
daiva 3
dalies 5
dalis 5
dalyje 6
dar 5
darbuotojai 2
daug 2
daugiabu�i 3
daugiau 4
daugiausia 3
daug�jo 4
demografin 2
departamentas 4
de�imtmetyje 2
de�imtme�io 2
de�iniajame 2
did�jo 2
did�iausi 2
did�iausia 3
did�iausias 5
did�iausios 2
did�iosios 2
dirbini 2
dirbiniai 2
dislokuotas 2
donatas 3
dramos 4
draugija 4
draugijos 2
du 3
dukart 2
duomenimis 8
duomenys 12
dvaro 3
dvi 3
d�l 5
eina 2
ekonomin 2
ekrano 6
elektrin 3
elektros 5
elenos 3
emilija 2
emumoje 2
em�lapis 3
em�lapyje 2
em�s 4
enciklopedij 6
enciklopedija 10
enciklopedijos 2
eng 2
epidemijos 2
evangelik 2
evangelikai 2
fabrikas 4
fabriko 2
festivalis 2
fk 2
fontanas 2
formuotas 2
fotografij 2
fotografijos 2
futbolas 2
g 20
gabriel�s 5
galerij 3
galerija 8
gaminiai 2
gamtos 2
gamykla 3
gamyklos 2
gatv 4
gatvi 2
gatv�s 12
gegu��s 2
gele�inkelio 4
gele�inkelis 4
gimnazija 6
gimnazijos 3
glassjazz 2
group 3
grup 3
gubernijos 3
gyvenamosios 4
gyvenamosiose 2
gyveno 7
gyventoj 19
gyventojai 5
gyvenviet 2
gyvenviet�s 2
ha 2
hidrometeorologijos 2
i 31
ia 2
iaurin 3
iaur�s 6
iemos 2
igonai 2
iki 8
iliustr 8
imperijos 2
individuali 3
inga 2
institutas 5
intakas 3
iplyt 2
ir 159
isbn 10
istorija 8
iuolaikinio 2
i�krito 2
j 21
jak�to 2
jalianiauskien 2
jam 2
jame 3
jau 3
jaunimo 3
jaun�j 2
jazz 2
ji 2
jo 3
joana 2
jonas 3
jos 3
jungia 2
juozas 2
juozo 8
ju�kien 2
j�s 2
kad 4
kai 5
kaimo 3
kaip 6
kairiajame 2
kanalizacija 2
kar 3
karaliaus 2
karinis 2
kariuomen 7
kariuomen�s 3
karka 2
karo 8
kart 3
karto 2
karui 2
kar��io 2
katedra 3
kaunas 2
kauno 5
kazimiero 2
kelias 2
keramikos 2
keturi 3
ketvirtadal 2
ketvirtajame 2
kiek 2
kino 17
kio 3
kiti 14
kitos 6
klaip�dos 4
klimatas 3
klimato 5
kniaudi�ki 4
knizikevi�ien 2
kolegija 4
kompozitorius 2
kontrimavi�i�t 2
kopija 8
kov 3
kovos 2
krante 3
kranto 3
kra�tas 11
kra�to 3
kra�totyros 4
kredito 3
krekenavos 2
kristaus 3
krituli 2
kult�ra 2
kult�ros 17
kunigaik�tyst�s 2
kupi�kio 2
kur 2
kuri 3
kuriame 2
kursuoja 2
kurta 8
kurtas 6
k�r�si 2
laidai 2
laikra�tis 4
laisvoji 2
laisv�s 11
latviai 3
leidimas 2
leidybos 4
lenk 3
lenkai 4
liep 2
liepa 2
liepos 3
lietuva 2
lietuvi 11
lietuviai 3
lietuvoje 9
lietuvos 35
ligonin 3
linas 2
link 9
lithuania 3
liudvika 2
liuteron 3
livonijos 3
lrt 2
l�li 3
l�vens 3
m 202
m.sur 9
m/s 2
machine 8
maisto 5
mal�nai 3
manoma 2
map 2
marija 4
mar�rut 3
masaitis-simno 2
medin 6
men 3
menas 3
meninio 2
meno 6
mergai�i 2
met 6
metais 4
metalo 2
metu 6
metus 3
mezginait�s 3
mieli 2
miest 10
miestai 2
miestas 15
mieste 30
miesteli 3
miesto 79
mikolajevo 2
miltinio 5
mi�k 2
mi�kinis 7
mm 8
mokslo 5
mokykl 2
mokykla 10
mokymo 2
moni 7
mon�s 14
mus 3
museum 3
muziejus 6
muzikinis 2
muzikos 4
mykolas 2
m�/s 4
m�nuo 2
m�s 2
nam 5
namas 3
namuose 2
nat�rali 3
nauj 3
naujas 3
naujasis 5
naujoji 2
naujojo 4
nauj�j 2
nei 2
nema�ai 2
nemuno 2
nendr 2
nepriklausomyb�s 2
neturintis 2
nev 5
nev��io 20
nev��is 5
norvegijos 2
nukent�jo 3
nuo 17
nuoroda 62
o 2
okupacija 2
orkestr 3
oro 3
osios 4
p 13
pabaiga 2
pabaigoje 4
padaug�jo 3
pagal 7
pagrindin 2
pagrindinis 2
pagrindin�s 3
pajuostyje 2
pajuos�io 2
pakra�tyje 3
palaik 3
panev 14
panev��ie�ius 2
panev��io 153
panev��iui 3
panev��yje 23
panev��ys 45
parapija 3
parkas 9
pasauliniam 2
pasaulinio 3
pasiek 2
pastat 3
pastatai 6
pastatas 7
pastate 5
pastatyta 9
pastatytas 4
pastatyti 5
pateikti 2
patenka 2
patvenktas 2
patvirtintas 2
pavaizduotas 2
pavieto 3
pedagogas 4
per 13
petkevi�ait�s-bit�s 5
pietin�je 4
pietry�iuose 2
pijor 3
pirm 2
pirmasis 2
pirmoji 3
pirmojo 3
pirmosios 2
pkc 2
plan 2
planas 2
ploto 2
pl�tros 3
pl�t�si 2
po 11
poetas 2
poilsio 5
prad�jo 6
prad�ta 5
prad�ti 2
prad�ia 2
prad�ioje 3
prad�ios 2
pramon 2
pramon�s 14
prasid�jo 4
prekybos 4
prek�s 2
prie 12
priklauso 3
priva�i 2
privilegija 2
pro 3
produktai 3
projekto 8
psl 9
pupkis 2
pus�je 3
pu�iam�j 2
p�s�i�j 4
radvili�kio–daugpilio 2
raida 5
rail 3
rainys 2
rajonai 2
rajono 8
ramygala 2
ramygalos 5
raudonoji 4
razmukait 2
ra�ytojas 2
realin 2
redakcija 2
reformos 2
regione 2
regiono 2
rekonstrukcija 2
rekordas 3
reljefo 2
renginiai 2
rengta 2
rengtas 2
rengtos 2
respublikos 10
rezultatai 2
re�isierius 5
rugs�jo 3
rus 3
rusai 4
rygos 2
ry�ius 2
r�mai 8
s 2
sal 4
san�il�s 3
savanori 2
savickien 2
savinink 2
saviti�kio 2
savivaldyb 9
savivaldybei 2
savivaldyb�s 5
savo 2
schmitz 2
sekund 8
seminarija 2
senajame 2
senamies�io 3
senasis 4
seniausias 3
senoji 2
senojo 2
sentikiai 2
senvag 6
sen�j 2
seser 2
siaurasis 2
siaut 2
siek 3
sik�r 6
sik�rusi 2
sik�r�s 3
simpoziumas 2
sistemos 2
skaistakalnio 3
skai�ius 4
skatino 2
skirtas 2
skyriaus 2
skyrius 3
smarkiai 2
sm�lyn�s 2
soviet 4
sovietme�io 2
sovietme�iu 3
spar�iai 4
spar�iau 2
spirito 2
sportas 2
sporto 4
staig 2
staiga 2
staigos 7
stambi 2
stasys 5
statiniai 2
statistikos 7
statusas 2
statyb 3
statyba 3
steigta 5
steigtas 3
steigti 2
stiklas 3
stiklo 4
stotis 6
straipsnis 2
su 18
suaugusi�j 3
sud 6
sudar 2
sukilim 2
suma��jo 2
sura�ymo 10
susidar 3
susiformavo 2
suteikta 2
systems 2
s�j�d�io 2
s�lygos 2
t 6
tai 2
tapo 4
tarnyba 2
tarp 6
tarptautinis 3
tarpukariu 3
taryb 2
ta�iau 5
teatrai 2
teatras 11
teatro 16
technika 2
technologijos 2
teikia 2
teismo 3
teka 2
tekstil�s 2
televizijos 2
telkinys 2
temperat�ra 4
teritorija 3
termofikacin 2
ties 3
tiesti 2
tik 2
tikrinta 62
tiltai 3
tiltas 13
tilvy�io 2
tinkl 2
to 4
tod�l 2
toks 2
transportas 2
transporto 3
traukiniai 2
tris 4
tsr 4
tsrs 2
tuo 2
turgaus 3
turi 5
tur�jo 2
u 3
ugdymo 2
ukmerg�s 2
ukrainie�iai 2
universiteto 4
upyt�s 4
up�s 2
u�fiksuotas 2
u�piltas 2
u�tvanka 3
u��m 4
v 4
vaik 4
vakarin 2
vakariniame 3
vakarin�je 3
vakaruose 3
vakarus 2
valdyba 2
vald�i 2
vald�ia 2
valstybinio 2
vandens 3
vandentiekio 2
vandenys 2
variakojis 2
variakojo 2
varnaitis 2
vasar 2
vasario 6
veik 5
veikia 14
veikla 2
veikti 6
veik�jas 3
verslo 2
versm 2
vert�jas 2
ve�imo 3
vid 3
vidurin 2
vidurio 3
viduryje 2
vidutini�kai 4
viena 3
vienas 2
vienintelis 2
vienuoliai 2
vienuolynas 5
viet 3
vietimas 3
vietimo 5
vietose 3
vietov�s 4
vietov�se 2
vie�oji 11
viga 2
vilktupis 2
vilniaus 4
vilnius 14
virtualiai 8
vis 2
visi 2
visuomen�s 3
visuotin 7
visuotinio 2
vitalija 2
vokietijos 4
vokie�i 3
vokie�iai 4
vyko 3
vyksta 3
vyriausioji 2
vyskupija 2
vytauto 2
v�jo 2
v�l 4
v�liau 7
v���s 2
wayback 8
wiring 2
xiv 2
xix 6
xvi 2
xvii 3
xx 7
xxi 2
yd 8
ydai 6
ym�s 2
ypa 2
yra 13
zona 3
zonos 2

```

**failas_crossref.txt**:
```
Zodis	Eilutes
a	16, 18, 22, 24, 29, 32, 33, 35, 48, 61, 93, 99, 258, 268, 305
abipus	1, 69, 95
administracin�s	18
aerodromas	226, 376
agent�ra	350, 383, 394
agienis	69
aido	35, 48, 264, 309
aik�t	32, 48, 90, 93
aik�t�je	52, 224
aik�t�s	41, 53, 334
aktor	191, 205
aktorius	183, 186, 187, 188, 190, 192, 195, 197, 203
albumas	308, 309
aldonas	314
aleksandras	16, 317
algimantas	195, 196, 204, 304, 326
algirdas	194, 200, 318, 336, 337
algis	198, 305
alia	15, 59, 69, 95, 222
altiniuose	16, 22
amat	48, 219
am�iaus	26, 33
ant	85, 348
antroje	24, 33
antrojo	55, 105
apa�tal	99
apie	18, 22, 33, 37, 69, 103, 264, 338, 368, 375, 382, 391, 392
aplinkkelio	219, 222
apskrities	18, 22, 29, 46, 48, 99, 263, 264, 358, 388, 393
aq	211, 217
architektas	95
architekt�ra	87, 88, 334, 349
archyvo	22, 99
archyvuota	361, 362, 399, 402, 406, 409, 411, 412
armija	42, 53
armijai	29, 42
atidaryta	37, 48, 57, 224, 373
atidarytas	35, 95, 260, 270
atkurta	48, 62
atsitrauk	42
augo	46, 333
auk�taitijos	215, 258, 368, 371
aurida	211, 214
autobus	48, 99, 224, 373, 375
automobili	211, 224, 233
aviacijos	59
baland�io	42, 85, 330
baltarusiai	125, 136, 150, 161
baltic	211, 217
baltica	222, 224, 372
bal�ikonio	99, 249, 301, 302
banko	99
ba�ny�i	5, 16, 310
ba�ny�ia	16, 22, 24, 29, 99
be	37, 48, 249
bei	22, 29, 93, 95, 99, 211, 224, 249, 251
bendrov	215, 224
bendrov�s	46, 215
bernardinai.lt	330, 351
beveik	16, 37, 53
biblioteka	48, 99, 264, 388, 389, 390, 391, 393
bibliotekai	264
bibliotekos	263, 390
bir�elio	53
buvo	16, 24, 27, 42, 46, 48, 59, 105
buvusio	69, 258
buvusios	16, 46
buv�s	21, 95, 238, 409
b�rys	42
c	74, 80, 81, 82
cargobull	211, 217
centras	1, 5, 46, 55, 92, 99, 107, 219, 249, 258, 260, 268, 270, 394, 395
centre	69, 95, 224, 249, 251
centrin	93, 354, 355
centrin�s	55, 62, 334
centro	29, 95, 99, 249
centru	18, 24, 33, 37, 93
chor	48, 258
cukraus	46, 53
d	7, 16, 42, 53, 74, 85, 330, 406
dabar	53, 99
dabartinis	1, 95
dail�s	57, 99, 249, 268, 392, 393
daiva	205, 339, 348
dalies	22, 55, 62, 69
dalis	62, 69, 71, 93, 95
dalyje	24, 69, 93, 95, 226
dar	24, 53, 55, 69, 107
darbuotojai	209, 217
daug	48, 107
daugiabu�i	55, 95
daugiau	33, 258, 260, 264
daugiausia	62, 74
daug�jo	22, 29, 48, 55
demografin	102, 109
departamentas	357, 358, 359, 360
de�imtmetyje	48, 55
de�imtme�io	41, 46
de�iniajame	1, 16
did�jo	33, 107
did�iausi	217, 270
did�iausia	33, 258, 264
did�iausias	46, 69, 251, 268
did�iausios	215, 367
did�iosios	13, 18
dirbini	55, 211
dirbiniai	211
dislokuotas	48, 59
donatas	192, 199, 328
dramos	57, 99, 255, 258
draugija	33, 35, 48
draugijos	99, 264
du	46, 224, 260
dukart	272
duomenimis	46, 103, 209, 222, 224, 249, 256, 270
duomenys	84, 116, 268, 344, 353, 354, 355, 357, 361, 362, 363, 364
dvaro	16, 18, 22
dvi	48, 57, 256
d�l	18, 29, 107, 328, 334
eina	93, 224
ekonomin	219, 369
ekrano	55, 69, 99, 236, 270
elektrin	46, 62, 215
elektros	53, 85, 93, 215
elenos	264, 389, 390
emilija	335, 340
emumoje	3, 69
em�lapis	66, 370, 404
em�lapyje	15, 18
em�s	16, 21, 215
enciklopedij	314, 317, 326, 337, 343, 356
enciklopedija	322, 326, 336, 337, 343, 349, 356, 366, 387, 388
enciklopedijos	116, 401
eng	42, 53
epidemijos	22, 37
evangelik	29, 99
evangelikai	167, 168
fabrikas	46, 55
fabriko	46, 53
festivalis	351, 397
fk	279, 281
fontanas	272, 397
formuotas	55, 107
fotografij	272, 308
fotografijos	268, 308
futbolas	278, 280
g	99, 202, 203, 204, 258, 260, 264, 268, 270
gabriel�s	99, 263, 264, 388, 393
galerij	268, 392
galerija	99, 268, 297, 308, 392, 393
gaminiai	211
gamtos	99, 249
gamykla	33, 46, 69
gamyklos	55, 270
gatv	32, 90, 93
gatvi	69, 93
gatv�s	45, 48, 93, 238, 239, 242, 310
gegu��s	42
gele�inkelio	95, 222, 372
gele�inkelis	33, 222, 371
gimnazija	37, 48, 57, 99, 301, 302
gimnazijos	48, 249, 377
glassjazz	272, 396
group	211, 215, 217
grup	62, 211, 251
gubernijos	27, 37
gyvenamosios	354, 355, 357, 358
gyvenamosiose	359, 360
gyveno	62, 103, 119, 131, 143, 153
gyventoj	22, 29, 33, 37, 55, 62, 103, 107, 353, 354, 355, 357, 359, 360
gyventojai	101, 103, 358, 359, 360
gyvenviet	18, 24
gyvenviet�s	16, 22
ha	69, 219
hidrometeorologijos	344, 347
i	16, 18, 22, 29, 37, 42, 69, 93, 103, 105, 258, 318, 361, 362, 399, 402, 406, 409, 411, 412
ia	24, 107
iaurin	69, 93
iaur�s	1, 3, 22, 93, 95
iemos	272, 346
igonai	126, 138
iki	16, 33, 74, 85, 107, 304, 305
iliustr	305, 306, 307, 308, 309, 310, 311, 312
imperijos	37, 103
individuali	95
inga	332, 352
institutas	314, 317, 318, 343, 356
intakas	69
iplyt	307, 311
ir	5, 10, 16, 18, 21, 22, 24, 26, 29, 32, 33, 37, 39, 42, 46, 48, 50, 53, 55, 57, 61, 69, 71, 74, 90, 92, 93, 95, 99, 103, 105, 107, 109, 181, 186, 187, 188, 190, 191, 192, 195, 197, 201, 203, 209, 211, 215, 219, 222, 224, 233, 243, 249, 251, 256, 260, 268, 270, 272, 310, 311, 314, 317, 326, 330, 334, 341, 342, 343, 348, 354, 356, 358, 359, 371, 382, 393
isbn	305, 306, 307, 308, 309, 310, 311, 312, 314
istorija	12, 310, 312, 319, 322, 331, 389, 405
iuolaikinio	260, 267
i�krito	85
j	16, 18, 29, 42, 57, 69, 93, 95, 99, 107, 215, 224, 258, 264, 301, 302, 358
jak�to	99, 239
jalianiauskien	329, 338
jam	16, 258
jame	18, 107, 270
jau	18, 33, 103
jaunimo	95, 249, 272
jaun�j	57
jazz	272, 397
ji	22, 24
jo	24, 99, 211
joana	307, 311
jonas	181, 189, 307
jos	16, 53
jungia	93, 224
juozas	175, 183
juozo	35, 57, 249, 255, 258, 260, 264
ju�kien	335, 340
j�s	345, 397
kad	16, 18, 22
kai	16, 74, 107, 340
kaimo	354, 355, 357
kaip	55, 105, 260, 264, 270, 333
kairiajame	1, 18
kanalizacija	48, 55
kar	22, 46, 103
karaliaus	48, 99
karinis	181, 226
kariuomen	37, 42, 53
kariuomen�s	42, 59, 181
karka	178, 190
karo	22, 37, 46, 53, 55, 105, 327
kart	16, 18, 33
karto	107
karui	37, 52
kar��io	74, 345
katedra	48, 98, 99
kaunas	311, 353
kauno	27, 37, 57, 224, 251
kazimiero	29, 249
kelias	93, 215
keramikos	268, 272
keturi	46, 57, 258
ketvirtadal	33, 37
ketvirtajame	48
kiek	22, 53
kino	57, 99, 186, 187, 188, 190, 191, 192, 194, 195, 197, 199, 201, 203, 258
kio	209, 215
kiti	22, 95, 99, 130, 142, 152, 162, 169, 211, 270, 326, 341
kitos	16, 46, 53, 211, 215, 268
klaip�dos	93, 95, 99, 258
klimatas	73, 78, 343
klimato	74, 76, 85, 344
kniaudi�ki	95, 350
knizikevi�ien	310, 312
kolegija	24, 29, 248, 251
kompozitorius	178, 185
kontrimavi�i�t	332, 352
kopija	361, 362, 399, 402, 406, 409, 411, 412
kov	74, 79
kovos	39, 328
krante	1, 16, 18
kranto	93, 99, 270
kra�tas	35, 272, 327, 328, 335, 340, 341, 346, 382, 395
kra�to	16, 42, 403
kra�totyros	48, 260, 387
kredito	33, 41, 99
krekenavos	18, 93
kristaus	48, 99
krituli	74, 85
kult�ra	253, 380
kult�ros	37, 69, 95, 99, 243, 256, 258, 264, 270, 272, 381, 386, 393, 394, 395
kunigaik�tyst�s	13, 18
kupi�kio	42, 93
kur	42, 318
kuri	85, 116, 233
kuriame	264, 306
kursuoja	222
kurta	29, 33, 48, 62, 264, 268
kurtas	57, 62, 258, 260
k�r�si	10, 62
laidai	211, 215
laikra�tis	35, 48, 62, 272
laisvoji	219, 369
laisv�s	41, 48, 52, 53, 90, 93, 99, 238, 258, 268
latviai	127, 139, 151
leidimas	314, 317
leidybos	314, 317, 343, 356
lenk	33, 48
lenkai	124, 137, 147, 156
liep	62, 74
liepa	74, 379
liepos	37, 53, 85
lietuva	343, 401
lietuvi	10, 33, 318, 322, 336, 343, 349, 366, 387, 388, 401
lietuviai	121, 133, 145
lietuvoje	22, 46, 57, 74, 85, 105, 258, 270
lietuvos	1, 3, 13, 16, 18, 42, 53, 85, 99, 181, 202, 251, 317, 326, 330, 337, 344, 347, 353, 354, 355, 357, 359, 360, 398
ligonin	48, 217, 345
linas	211, 215
link	16, 42, 69, 93, 370
lithuania	211, 217, 331
liudvika	310, 312
liuteron	29, 99, 410
livonijos	16, 18
lrt	373, 384
l�li	258, 272, 384
l�vens	16, 69
m	15, 16, 18, 21, 22, 24, 27, 29, 33, 35, 37, 42, 45, 46, 48, 53, 55, 57, 62, 69, 74, 85, 90, 92, 95, 99, 103, 107, 109, 110, 112, 114, 119, 131, 143, 153, 202, 203, 204, 209, 217, 222, 224, 249, 256, 258, 260, 264, 268, 270, 272, 276, 298, 299, 304, 305, 328, 330, 342, 345, 353, 361, 362, 363, 364, 365, 406
m.sur	110, 112, 114
m/s	85
machine	361, 362, 399, 402, 406, 409, 411, 412
maisto	37, 211, 215
mal�nai	33, 46, 329
manoma	16, 18
map	230, 232
marija	95, 308, 314
mar�rut	224, 370, 374
masaitis-simno	326, 337
medin	16, 22, 24, 99
men	99, 249, 268
menas	258, 385
meninio	272, 396
meno	256, 258, 260, 267, 268
mergai�i	48
met	29, 107, 355, 357, 359, 360
metais	33, 107, 327, 354
metalo	211
metu	18, 22, 29, 37, 85, 103
metus	74, 116, 272
mezginait�s	264, 389, 390
mieli	33, 46
miest	29, 33, 37, 42, 57, 224, 233, 282, 317, 330
miestai	352, 399
miestas	1, 3, 10, 29, 33, 42, 46, 55, 69, 74, 95, 251, 285, 306, 348
mieste	24, 29, 33, 37, 42, 46, 48, 53, 71, 74, 85, 93, 95, 99, 103, 209, 211, 219, 251, 260, 264, 268, 272
miesteli	18, 105, 330
miesto	1, 7, 16, 22, 24, 29, 33, 35, 37, 42, 45, 46, 53, 55, 62, 68, 69, 71, 92, 93, 95, 105, 177, 219, 222, 224, 226, 256, 264, 268, 307, 308, 319, 331, 335, 340, 367, 369, 377, 378, 380, 386, 392, 393, 399, 402
mikolajevo	24, 95
miltinio	57, 249, 255, 258, 264
mi�k	48, 71
mi�kinis	304, 320, 321, 323, 324, 325, 326
mm	74, 83, 85, 222
mokslo	219, 314, 317, 343, 356
mokykl	48, 57
mokykla	24, 29, 33, 48, 57, 99, 249
mokymo	249
moni	18, 53, 55, 62, 107, 119
mon�s	16, 33, 37, 46, 53, 105, 131, 143, 153, 171, 172, 209, 211, 367
mus	368, 375, 391
museum	260, 267
muziejus	48, 260, 267, 387
muzikinis	258, 383
muzikos	57, 249, 270, 272
mykolas	178, 193
m�/s	69
m�nuo	74, 79
m�s	35, 401
nam	53, 95
namas	21, 99, 264
namuose	249, 260
nat�rali	55, 71, 105
nauj	352, 379, 382
naujas	29, 95, 351
naujasis	18, 22, 33, 95
naujoji	99, 373
naujojo	18, 22, 24
nauj�j	18, 24
nei	33, 258
nema�ai	71, 95
nemuno	93, 242
nendr	69, 341
nepriklausomyb�s	39, 258
neturintis	251, 379
nev	29, 69, 95, 229, 233
nev��io	1, 10, 16, 18, 48, 55, 68, 69, 95, 305, 348
nev��is	68, 69, 99, 336, 337
norvegijos	62, 219
nukent�jo	22, 37
nuo	3, 22, 24, 27, 37, 46, 48, 95, 107, 222, 258, 272, 305, 384
nuoroda	304, 319, 322, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 338, 339, 340, 341, 342, 344, 345, 346, 347, 348, 349, 350, 351, 352, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399
o	18, 42
okupacija	50, 55
orkestr	258, 272
oro	74, 406
osios	93, 258, 260, 268
p	305, 306, 307, 308, 309, 310, 311, 312, 320, 321, 323, 324, 325
pabaiga	41, 61
pabaigoje	33, 37, 46
padaug�jo	107
pagal	3, 46, 74, 95, 116, 163
pagrindin	93, 249
pagrindinis	88, 172
pagrindin�s	37, 93, 95
pajuostyje	59, 226
pajuos�io	226, 235
pakra�tyje	69, 219, 222
palaik	37, 53
panev	18, 22, 24, 29, 33, 37, 42, 53, 222, 224, 329
panev��ie�ius	53, 345
panev��io	1, 5, 16, 18, 21, 22, 24, 29, 33, 37, 41, 42, 45, 48, 53, 57, 59, 62, 66, 68, 69, 71, 76, 78, 88, 95, 98, 99, 172, 174, 176, 208, 211, 214, 215, 217, 219, 222, 224, 248, 249, 251, 258, 260, 263, 264, 268, 270, 272, 279, 283, 304, 307, 308, 310, 311, 312, 319, 322, 327, 328, 331, 334, 335, 340, 341, 346, 349, 350, 351, 358, 365, 367, 369, 372, 375, 376, 377, 378, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 399, 403, 404, 405, 412
panev��iui	22, 24, 85
panev��yje	16, 22, 24, 29, 33, 48, 62, 85, 103, 107, 249, 256, 276, 280, 345, 352, 373, 396, 397
panev��ys	1, 15, 16, 18, 22, 24, 27, 33, 37, 46, 74, 84, 95, 99, 251, 279, 304, 305, 306, 308, 309, 310, 312, 326, 330, 333, 345, 356, 366, 379, 397, 401, 406
parapija	29, 410, 411
parkas	62, 95, 219, 224, 350, 375
pasauliniam	37, 52
pasaulinio	55, 105, 327
pasiek	33, 107
pastat	37, 48, 264
pastatai	57, 99, 385
pastatas	22, 99, 214, 352
pastate	258, 260
pastatyta	16, 22, 24, 29, 48, 55, 62, 99, 107
pastatytas	21, 22, 29, 99
pastatyti	16, 55, 57, 95, 222
pateikti	76, 116
patenka	71, 74
patvenktas	69
patvirtintas	29, 62
pavaizduotas	15, 18
pavieto	18, 21, 99
pedagogas	178, 179, 180, 185
per	22, 29, 55, 62, 74, 85, 107, 229, 233, 272
petkevi�ait�s-bit�s	99, 263, 264, 388, 393
pietin�je	41, 71, 95, 226
pietry�iuose	71, 95
pijor	24, 29, 409
pirm	16, 18
pirmasis	29, 35
pirmoji	24, 37, 177
pirmojo	103, 327, 353
pirmosios	33, 48
pkc	211, 217
plan	42, 46
planas	29, 93
ploto	69, 219
pl�tros	350, 383, 394
pl�t�si	18, 55
po	18, 27, 29, 33, 42, 46, 53, 55, 62, 69, 105
poetas	180, 200
poilsio	69, 95, 243
prad�jo	16, 35, 46, 48, 57
prad�ta	46, 48, 55, 62
prad�ti	33
prad�ia	26, 61
prad�ioje	32, 33, 35
prad�ios	22, 99
pramon	105, 209
pramon�s	33, 53, 55, 62, 93, 107, 211, 219
prasid�jo	42, 53, 384
prekybos	18, 22, 215, 219
prek�s	215
prie	10, 16, 18, 37, 46, 53, 69, 103, 219, 354
priklauso	85, 264
priva�i	24, 29
privilegija	22, 24
pro	33, 222, 224
produktai	211, 215
projekto	361, 362, 399, 402, 406, 409, 411, 412
psl	315, 316, 317, 318, 326, 337, 343, 356, 401
pupkis	314
pus�je	24, 33, 41
pu�iam�j	258, 272
p�s�i�j	233, 237, 239, 243
radvili�kio–daugpilio	33, 222
raida	33, 102, 105, 109, 304
rail	222, 372
rainys	336, 337
rajonai	55, 93
rajono	5, 74, 256, 264, 272, 381, 391
ramygala	15, 22
ramygalos	16, 90, 93, 268
raudonoji	42, 99
razmukait	314
ra�ytojas	193, 196
realin	33, 99
redakcija	326, 337
reformos	18, 33
regione	258, 372
regiono	24, 33
rekonstrukcija	55, 62
rekordas	74, 85, 345
reljefo	66, 69
renginiai	211, 270
rengta	69, 264
rengtas	69, 95
rengtos	48, 95
respublikos	27, 93, 240, 258, 260, 264, 268, 357, 359, 360
rezultatai	359, 360
re�isierius	183, 187, 192, 201, 203
rugs�jo	7, 16, 85
rus	29, 315, 364
rusai	122, 134, 148, 157
rygos	22, 224
ry�ius	53
r�mai	99, 219, 270
s	93, 306
sal	270
san�il�s	69, 71
savanori	42, 224
savickien	339, 348
savinink	24, 29
saviti�kio	69, 244
savivaldyb	319, 367, 369, 377, 378, 380, 381, 386, 399
savivaldybei	256
savivaldyb�s	5, 45, 99, 264, 391
savo	16, 46
schmitz	211, 217
sekund	272, 329, 332, 333, 338, 339, 348, 352
seminarija	48, 99
senajame	16, 22
senamies�io	93, 310, 393
senasis	22, 33, 95
seniausias	21, 95, 99
senoji	93, 95
senojo	16, 24
sentikiai	166, 412
senvag	55, 68, 69, 92, 272, 340
sen�j	18, 24
seser	53, 99
siaurasis	33, 371
siaut	37, 85
siek	74, 85
sik�r	16, 18, 24, 48, 95
sik�rusi	264
sik�r�s	69, 258, 260
simpoziumas	272, 396
sistemos	211
skaistakalnio	69, 95, 237
skai�ius	33, 107
skatino	22, 29
skirtas	226, 260
skyriaus	99
skyrius	57, 217, 264
smarkiai	22, 42
sm�lyn�s	93, 238
soviet	53, 59, 62
sovietme�io	95, 99
sovietme�iu	59, 95
spar�iai	29, 46, 55, 107
spar�iau	18, 22
spirito	33, 46
sportas	274, 275
sporto	57, 99, 249, 251
staig	55, 393
staiga	249, 258
staigos	18, 37, 249, 256, 381, 386
stambi	55, 107
stasys	197, 202, 260, 267
statiniai	22, 99
statistikos	353, 354, 355, 357, 358, 359, 360
statusas	24, 29
statyb	215, 332, 382
statyba	46, 209, 334
steigta	29, 33, 219, 264
steigtas	24, 53, 258
steigti	29, 33
stiklas	208, 211
stiklo	55, 211, 272, 396
stotis	5, 53, 99, 222, 224, 373
straipsnis	88, 172
su	22, 42, 53, 74, 93, 99, 224, 236, 242, 244, 258, 270, 328, 338
suaugusi�j	57, 249
sud	305, 307, 308, 310, 311, 312
sudar	33, 103
sukilim	29
suma��jo	62, 107
sura�ymo	103, 353, 355, 357, 359, 360, 361, 362, 363, 364
susidar	16, 29, 69
susiformavo	18, 95
suteikta	22, 24
systems	211, 217
s�j�d�io	62
s�lygos	16, 29
t	316, 326, 337, 343, 356, 401
tai	37, 107
tapo	18, 24, 33, 37
tarnyba	344, 347
tarp	22, 24, 69, 109, 233, 264
tarptautinis	272, 396
tarpukariu	46, 48, 69
taryb	326, 337
ta�iau	16, 22, 42
teatrai	57, 258
teatras	57, 99, 255, 258, 383, 384, 385
teatro	99, 183, 186, 187, 188, 190, 191, 192, 195, 197, 203, 258, 270, 382
technika	52, 215
technologijos	251
teikia	249, 251
teismo	21, 22, 99
teka	69
tekstil�s	211
televizijos	192, 201
telkinys	69
temperat�ra	74, 81
teritorija	16, 55, 69
termofikacin	62, 215
ties	69
tiesti	48, 222
tik	29, 69
tikrinta	304, 319, 322, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 338, 339, 340, 341, 342, 344, 345, 346, 347, 348, 349, 350, 351, 352, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399
tiltai	228, 229, 233
tiltas	29, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245
tilvy�io	69, 93
tinkl	93
to	18, 48, 62, 249
tod�l	10, 107
toks	10, 258
transportas	209, 221
transporto	59, 211, 233
traukiniai	222
tris	29, 53, 268
tsr	354, 355
tsrs	53
tuo	18, 103
turgaus	22, 32, 53
turi	93, 258, 260, 264, 268
tur�jo	46
u	18, 95, 226
ugdymo	249
ukmerg�s	93, 99
ukrainie�iai	123, 135
universiteto	251, 379
upyt�s	16, 18, 21, 99
up�s	10
u�fiksuotas	74, 345
u�piltas	69
u�tvanka	69, 236, 244
u��m	29, 37, 53
v	95, 99
vaik	57, 249, 272
vakarin	93
vakariniame	69, 219, 245
vakarin�je	24, 71, 95
vakaruose	71, 95
vakarus	3, 222
valdyba	354, 355
vald�i	24, 53
vald�ia	37
valstybinio	18, 217
vandens	69
vandentiekio	69, 335
vandenys	215, 368
variakojis	181, 184
variakojo	42
varnaitis	69, 341
vasar	69, 74
vasario	74, 85, 93, 258, 260, 268
veik	29, 46, 48, 57, 209
veikia	211, 219, 222, 224, 249, 258, 260, 264
veikla	22, 270
veikti	35, 37, 46, 48, 57
veik�jas	174, 181, 189
verslo	251, 365
versm	99, 258
vert�jas	175, 180
ve�imo	258, 371, 384
vid	80, 81, 82
vidurin	24, 48
vidurio	3, 16, 74
viduryje	16, 18
vidutini�kai	74
viena	48, 68, 256
vienas	249, 270
vienintelis	62, 258
vienuoliai	24, 48
vienuolynas	24, 29, 99, 409
viet	68, 270
vietimas	246, 249, 378
vietimo	24, 37, 249, 251
vietose	69, 71, 264
vietov�s	354, 355, 357, 358
vietov�se	359, 360
vie�oji	48, 99, 249, 264, 388, 389, 390, 391, 393
viga	307, 311
vilktupis	69, 341
vilniaus	3, 22, 27, 93
vilnius	307, 314, 317, 318, 326, 337, 343, 354, 355, 356, 357, 358, 359, 360
virtualiai	327, 328, 335, 340, 341, 346, 382, 395
vis	24, 62
visi	53, 99
visuomen�s	173, 174, 189
visuotin	322, 336, 343, 349, 366, 387, 388
visuotinio	103, 357
vitalija	329, 338
vokietijos	37, 42, 53
vokie�i	37, 42
vokie�iai	128, 140, 149, 159
vyko	33, 105, 276
vyksta	270, 272
vyriausioji	326, 337
vyskupija	5, 48
vytauto	249
v�jo	46, 85
v�l	42, 46, 53, 397
v�liau	16, 24, 53, 59, 95, 107
v���s	222, 372
wayback	361, 362, 399, 402, 406, 409, 411, 412
wiring	211, 217
xiv	16
xix	26, 29, 33, 99
xvi	18, 305
xvii	22, 99
xx	26, 32, 35, 48, 61, 99, 268
xxi	61, 99
yd	22, 33, 48, 53, 174
ydai	53, 103, 129, 141, 146, 155
ym�s	171, 172
ypa	22
yra	3, 5, 71, 74, 95, 107, 226, 249, 251, 256, 260, 270
zona	69, 219, 369
zonos	95

```

**failas_urls.txt**:
```
Rasti URL adresai:
Artnews.lt
Bernardinai.lt
Scortis.lt
Stops.lt
Susudata.de
Travel.lt

```