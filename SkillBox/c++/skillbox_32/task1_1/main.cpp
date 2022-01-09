#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>


int main() {
    std::ifstream file("C:\\Users\\zholu\\Desktop\\CPP_primer\\SkillBox\\c++\\skillbox_32\\task1_1\\titanic.json");
    nlohmann::json j;
    file >> j;
    std::cout << j << std::endl;

    std::string name;
    std::cout << "Name:";
    std::cin >> name;

    for (auto it = j.begin(); it != j.end(); ++it) {
        nlohmann::json movie = it.value();
        nlohmann::json cast = movie["cast"];
        for (auto jt = cast.begin(); jt != cast.end(); ++jt) {
            std::string c_name = to_string(jt.value());
            if (c_name.find(name) != std::string::npos) {
                std::cout << name << " in " << it.key() << " as " << jt.key() << std::endl;
            }
        }
    }
}


