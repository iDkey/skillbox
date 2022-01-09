#include <iostream>
#include <vector>
#include <iomanip>
#include <filesystem>

int main() {
    auto showFile =
            [](std::filesystem::path path, const std::string ext) {
                std::vector<std::string> file_name;
                for (const auto &p: std::filesystem::recursive_directory_iterator(path)) {
                    if (p.is_regular_file()) {
                        if (!p.path().extension().compare(ext))
                            file_name.push_back(p.path().filename());
                    }
                }
                return std::make_unique<std::vector<std::string>>(file_name);
            };

    auto file = showFile("/home/jollu/Desktop/CPP_primer/SkillBox/c++/", ".cpp");
    int count = 0;
    for (auto i = file->begin(); i != file->end(); ++i) {
        count++;
        std::cout << std::setw(6) << count << std::left << std::setw(30) << *i << "\n";

    }
}