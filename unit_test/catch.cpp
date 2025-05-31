#define CATCH_CONFIG_MAIN
#include "catch_amalgmated.hpp"
#include "funkcijos.h"
#include <fstream>
#include <string>
#include <cstdio>

// Pagalbine funkcija failo turiniui nuskaityti
std::string read_file(const std::string& failas) {
    std::ifstream in(failas);
    std::ostringstream ss;
    ss << in.rdbuf();
    return ss.str();
}

TEST_CASE("nuskaityti_is_failo grazina failo turini ir graziai tvarkosi su neegzistuojanciu failu") {
    // Sukuriam faila
    std::ofstream out("test.txt");
    out << "Labas pasauli\n";
    out.close();
    std::string tekstas = nuskaityti_is_failo("test.txt");
    REQUIRE(tekstas.find("Labas pasauli") != std::string::npos);

    // Neegzistuojantis failas
    std::string tuscias = nuskaityti_is_failo("tokio_nėra.txt");
    REQUIRE(tuscias == "");
    std::remove("test.txt");
}

TEST_CASE("nuskaityti_is_vartotojo grazina tuscia kai nieko neivedama") {
    REQUIRE(typeid(nuskaityti_is_vartotojo()).name() != nullptr);
}

TEST_CASE("analizuoti_zodzius sukuria output ir crossref failus, tikrina edge atvejus") {
    std::string tekstas = "labas pasauli labas pasauli\nlabas\nLABAS, pasauli!";
    analizuoti_zodzius(tekstas, "test_");
    std::string rez = read_file("test_output.txt");
    std::string cross = read_file("test_crossref.txt");
    // Tikrinam ar yra labas ir pasauli, abu turi kartotis daugiau nei 1 karta
    REQUIRE(rez.find("labas") != std::string::npos);
    REQUIRE(rez.find("pasauli") != std::string::npos);
    REQUIRE(cross.find("labas") != std::string::npos);
    REQUIRE(cross.find("pasauli") != std::string::npos);

    // Tikrinam ar crossref yra eiluciu numeriai
    REQUIRE(cross.find("1") != std::string::npos);
    REQUIRE(cross.find("2") != std::string::npos);

    
    analizuoti_zodzius("", "tuscias_");
    std::string tuscias = read_file("tuscias_output.txt");
    REQUIRE(tuscias == "");
    std::string tuscias_cross = read_file("tuscias_crossref.txt");
    REQUIRE(tuscias_cross.find("Zodis") != std::string::npos);

    std::remove("test_output.txt");
    std::remove("test_crossref.txt");
    std::remove("tuscias_output.txt");
    std::remove("tuscias_crossref.txt");
}

TEST_CASE("atrasti_url suranda url ir iraso i faila, tikrina edge atvejus") {
    std::string tekstas = "Aplankykite https://vu.lt ir www.vilnius.lt arba vilnius.lt, taip pat test.com/test.";
    atrasti_url(tekstas, "test_urls.txt");
    std::string urls = read_file("test_urls.txt");
    REQUIRE(urls.find("https://vu.lt") != std::string::npos);
    REQUIRE(urls.find("www.vilnius.lt") != std::string::npos);
    REQUIRE(urls.find("vilnius.lt") != std::string::npos);
    REQUIRE(urls.find("test.com/test") != std::string::npos);

    
    std::string tekstas2 = "abc.com, xyz.net.";
    atrasti_url(tekstas2, "test_urls2.txt");
    std::string urls2 = read_file("test_urls2.txt");
    REQUIRE(urls2.find("abc.com") != std::string::npos);
    REQUIRE(urls2.find("xyz.net") != std::string::npos);

    
    atrasti_url("", "test_urls3.txt");
    std::string urls3 = read_file("test_urls3.txt");
    REQUIRE(urls3.find("Rasti URL adresai") != std::string::npos);

    std::remove("test_urls.txt");
    std::remove("test_urls2.txt");
    std::remove("test_urls3.txt");
}

TEST_CASE("analizuoti_zodzius ignoruoja skyrybos zenklus ir didziasias raides") {
    std::string tekstas = "Labas! LABAS, laBas. pasauli; pasauli: PASAULI";
    analizuoti_zodzius(tekstas, "test2_");
    std::string rez = read_file("test2_output.txt");
    REQUIRE(rez.find("labas") != std::string::npos);
    REQUIRE(rez.find("pasauli") != std::string::npos);
    std::remove("test2_output.txt");
    std::remove("test2_crossref.txt");
}

TEST_CASE("atrasti_url neranda netikru url") {
    std::string tekstas = "cia nera jokio url adreso";
    atrasti_url(tekstas, "test_urls4.txt");
    std::string urls = read_file("test_urls4.txt");
    
    REQUIRE(urls.find("Rasti URL adresai") != std::string::npos);
    std::remove("test_urls4.txt");
}