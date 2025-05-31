#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <cctype>
#include <regex>

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
    std::map<std::string, std::set<int>> word_lines;
    std::string line, word;
    int line_number = 0;

    while (std::getline(in, line)) {
        ++line_number;
        std::istringstream iss(line);
        while (iss >> word) {
            std::string cleaned = valymas(word);
            if (!cleaned.empty()) {
                for (auto& c : cleaned) c = std::tolower(c);
                ++word_count[cleaned];
                word_lines[cleaned].insert(line_number);
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

    // Cross-reference lentelė
    std::ofstream cross("crossref.txt");
    if (!cross) {
        std::cerr << "Nepavyko atidaryti crossref.txt" << std::endl;
        return 1;
    }
    cross << "Zodis\tEilutes\n";
    for (const auto& pair : word_count) {
        if (pair.second > 1) {
            cross << pair.first << "\t";
            bool first = true;
            for (int ln : word_lines[pair.first]) {
                if (!first) cross << ", ";
                cross << ln;
                first = false;
            }
            cross << std::endl;
        }
    }
    cross.close();

 // URL paieška ir išvedimas į urls.txt
    std::ifstream in2("input.txt");
    if (!in2) {
        std::cerr << "Nepavyko atidaryti input.txt" << std::endl;
        return 1;
    }
    std::ofstream url_out("urls.txt");
    if (!url_out) {
        std::cerr << "Nepavyko atidaryti urls.txt" << std::endl;
        return 1;
    }

    // regex,  https://, http://, www. ir domenus su .lt, .com ir pan.
    std::regex url_regex(R"((https?://[^\s,]+)|(www\.[^\s,]+)|([a-zA-Z0-9\-_]+\.(lt|com|org|net|edu|gov|eu|ru|uk|de|fr|it|pl|us|info|io|co)(/[^\s,]*)?))");

    std::string text_line;
    std::set<std::string> found_urls;
    while (std::getline(in2, text_line)) {
        std::sregex_iterator it(text_line.begin(), text_line.end(), url_regex);
        std::sregex_iterator end;
        for (; it != end; ++it) {
            std::string url = it->str();
            // Pašaliname galinius skyrybos ženklus
            while (!url.empty() && (url.back() == '.' || url.back() == ',' || url.back() == ')' || url.back() == ']')) {
                url.pop_back();
            }
            found_urls.insert(url);
        }
    }
    in2.close();

    url_out << "Rasti URL adresai:\n";
    for (const auto& url : found_urls) {
        url_out << url << std::endl;
    }
    url_out.close();


    std::cout << "Rezultatai irašyti i output.txt, crossref.txt ir urls.txt" << std::endl;
    return 0;
}