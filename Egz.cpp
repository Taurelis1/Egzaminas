#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cctype>

// Funkcija pasalinti skyrybos zenklus nuo zodzio pradzios ir pabaigos
std::string valymas(const std::string& word) {
    size_t start = 0, end = word.size();
    while (start < end && !std::isalpha(word[start])) ++start;
    while (end > start && !std::isalpha(word[end - 1])) --end;
    return word.substr(start, end - start);
}

int main() {
    std::ifstream in("input.txt");
    if (!in) {
        std::cerr << "Nepavyko atidaryti input.txt" << std::endl;
        return 1;
    }

    std::map<std::string, int> word_count;
    std::string line, word;

    while (std::getline(in, line)) {
        std::istringstream iss(line);
        while (iss >> word) {
            std::string cleaned = valymas(word);
            if (!cleaned.empty()) {
                // Konvertuojame i mažasias raides
                for (auto& c : cleaned) c = std::tolower(c);
                ++word_count[cleaned];
            }
        }
    }
    in.close();

    std::ofstream out("output.txt");
    if (!out) {
        std::cerr << "Nepavyko atidaryti output.txt" << std::endl;
        return 1;
    }

    for (const auto& pair : word_count) {
        if (pair.second > 1) {
            out << pair.first << " " << pair.second << std::endl;
        }
    }
    out.close();

    std::cout << "Rezultatai irašyti i output.txt" << std::endl;
    return 0;
}