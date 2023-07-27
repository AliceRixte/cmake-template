#include "show_file.h"

#include <iostream>
#include <fstream>


void displayFileContent(const std::string& path) {
    std::ifstream file(path);

    if (!file.is_open()) {
        std::cerr << "Error opening the file: " << path << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
}
