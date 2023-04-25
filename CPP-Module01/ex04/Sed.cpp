#include "Sed.hpp"

#include <cstdlib>
#include <fstream>
#include <string>

Sed::Sed(){}

Sed::~Sed(){}

void Sed::replace(std::string fileName, std::string s1, std::string s2) {
    if (fileName.empty() || s1.empty() || s2.empty()) {
        std::cout << "One or more empty arguments\n";
        exit(1);
    }

    std::ifstream infile(fileName.c_str());
    if (!infile) {
        std::cout << "Failed to open infile\n";
        exit(1);
    }

    std::ofstream outfile((fileName + ".replace").c_str(), std::fstream::in | std::ifstream::trunc);
    if (!outfile) {
        std::cout << "Failed to open outfile\n";
        exit(1);
    }

    std::string line;
    while (std::getline(infile, line, '\n')) {
        outfile << findStr(line, s1, s2);
        if (infile.eof() == 0) {
            outfile << "\n";
        }
    }
    infile.close();
    outfile.close();
}

std::string Sed::findStr(std::string line, std::string s1, std::string s2) {
    std::string res;
    size_t first = 0;
    size_t index;

    while (1) {
        index = line.find(s1, first);
        if (index == std::string::npos) {
            break ;
        }
        index -= first;
        res.append(line, first, index);
        res.append(s2, 0, s2.length());
        first += index + s1.length();
    }
    res.append(line, first);
    return (res);
}
