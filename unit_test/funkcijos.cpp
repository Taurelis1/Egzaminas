#include "funkcijos.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <regex>
#include <cctype>

std::string valymas(const std::string& word) {
    size_t start = 0, end = word.size();
    while (start < end && !std::isalpha(word[start])) ++start;
    while (end > start && !std::isalpha(word[end - 1])) --end;
    return word.substr(start, end - start);
}

std::string nuskaityti_is_failo(const std::string& failas) {
    std::ifstream in(failas);
    if (!in) {
        std::cerr << "Nepavyko atidaryti failo: " << failas << std::endl;
        return "";
    }
    std::ostringstream ss;
    ss << in.rdbuf();
    return ss.str();
}

std::string nuskaityti_is_vartotojo() {
    std::cout << "Iveskite teksta (baigti su tuscia eilute):" << std::endl;
    std::string line, tekstas;
    while (std::getline(std::cin, line)) {
        if (line.empty()) break;
        tekstas += line + "\n";
    }
    return tekstas;
}

void analizuoti_zodzius(const std::string& tekstas, const std::string& prefix) {
    std::istringstream in(tekstas);
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

    std::ofstream out(prefix + "output.txt");
    for (const auto& pair : word_count) {
        if (pair.second > 1) {
            out << pair.first << " " << pair.second << std::endl;
        }
    }
    out.close();

    std::ofstream cross(prefix + "crossref.txt");
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
}

void atrasti_url(const std::string& tekstas, const std::string& failas) {
    std::istringstream in(tekstas);
    std::regex url_regex(R"((https?://[^\s,]+)|(www\.[^\s,]+)|([a-zA-Z0-9\-_]+\.(lt|com|org|net|edu|gov|eu|ru|uk|de|fr|it|pl|us|info|io|co)(/[^\s,]*)?))");
    std::set<std::string> found_urls;
    std::string line;
    while (std::getline(in, line)) {
        std::sregex_iterator it(line.begin(), line.end(), url_regex);
        std::sregex_iterator end;
        for (; it != end; ++it) {
            std::string url = it->str();
            while (!url.empty() && (url.back() == '.' || url.back() == ',' || url.back() == ')' || url.back() == ']')) {
                url.pop_back();
            }
            found_urls.insert(url);
        }
    }
    std::ofstream url_out(failas);
    url_out << "Rasti URL adresai:\n";
    for (const auto& url : found_urls) {
        url_out << url << std::endl;
    }
    url_out.close();
}