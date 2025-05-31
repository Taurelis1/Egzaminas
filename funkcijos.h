#pragma once
#include <string>


std::string nuskaityti_is_failo(const std::string& failas);
std::string nuskaityti_is_vartotojo();
void analizuoti_zodzius(const std::string& tekstas, const std::string& prefix);
void atrasti_url(const std::string& tekstas, const std::string& failas);