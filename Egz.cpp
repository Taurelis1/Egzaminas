#include <iostream>
#include "funkcijos.h"

int main() {
    while (true) {
        std::cout << "\nMENIU:\n";
        std::cout << "1 - Nuskaityti teksta is failo\n";
        std::cout << "2 - Ivesti teksta ranka\n";
        std::cout << "0 - Iseiti\n";
        std::cout << "Pasirinkite: ";
        int pasirinkimas;
        std::cin >> pasirinkimas;
        std::cin.ignore();
        if (pasirinkimas == 0) break;

        std::string tekstas;
        std::string prefix = "";
        if (pasirinkimas == 1) {
            std::cout << "Iveskite failo pavadinima: ";
            std::string failas;
            std::getline(std::cin, failas);
            tekstas = nuskaityti_is_failo(failas);
            prefix = "failas_";
        } else if (pasirinkimas == 2) {
            tekstas = nuskaityti_is_vartotojo();
            prefix = "ivedimas_";
        } else {
            std::cout << "Neteisingas pasirinkimas!\n";
            continue;
        }
        if (tekstas.empty()) {
            std::cout << "Tekstas tuscias arba failas nerastas.\n";
            continue;
        }

        std::cout << "\nKa norite atlikti?\n";
        std::cout << "1 - Atrasti zodzius ir ju vieta\n";
        std::cout << "2 - Atrasti tik URL adresus\n";
        std::cout << "3 - Atlikti abu veiksmus\n";
        std::cout << "Pasirinkite: ";
        int veiksmas;
        std::cin >> veiksmas;
        std::cin.ignore();

        if (veiksmas == 1) {
            analizuoti_zodzius(tekstas, prefix);
            std::cout << "Rezultatai irasyti i " << prefix << "output.txt ir " << prefix << "crossref.txt\n";
        } else if (veiksmas == 2) {
            atrasti_url(tekstas, prefix + "urls.txt");
            std::cout << "Rezultatai irasyti i " << prefix << "urls.txt\n";
        } else if (veiksmas == 3) {
            analizuoti_zodzius(tekstas, prefix);
            atrasti_url(tekstas, prefix + "urls.txt");
            std::cout << "Rezultatai irasyti i " << prefix << "output.txt, " << prefix << "crossref.txt ir " << prefix << "urls.txt\n";
        } else {
            std::cout << "Neteisingas pasirinkimas!\n";
        }
    }
    std::cout << "Programa baigta.\n";
    return 0;
}