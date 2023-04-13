#include "Sed.hpp"

Sed::Sed(){}

Sed::~Sed(){}

void Sed::replace(std::string fileName, std::string s1, std::string s2) {
    if (fileName.empty() || s1.empty() || s2.empty()) {
        std::cout << "One or more empty arguments\n";
        exit (EXIT_FAILURE);
    }

    std::ifstream infile(fileName);
    if (!infile) {
        std::cout << "Failed to open infile\n";
        exit (EXIT_FAILURE);
    }

    std::ofstream outfile(fileName + ".replace");
    if (!outfile) {
        std::cout << "Failed to open outfile\n";
        exit (EXIT_FAILURE);
    }

    std::string line;
    while (infile >> line) { //funcionamiento de infile y outfile
        //std::cout << infile << " " << line << "\n";
        outfile << Sed::findStr(line, s1, s2) << "\n";
        //outfile << line << "\n";
    }

    //file se pone a 0 cuando llega al final del archivo;
  //  std::cout << infile; //quitar
  //  std::cout << "\npirateo1: " << s1 << "\n"; //quitar
  //  std::cout << "pirateo2: " << s2 << "\n"; //quitar
}

std::string Sed::findStr(std::string line, std::string s1, std::string s2) {
    std::string res;
    int first = 0;
    int index;

    index = line.find(s1, first);
//    std::cout << "test index: " << index << "\n" << "pirateo: " << s2 << "\n";
    if (index != -1) {
        res.append(line, first, index);
        res.append(s2, 0, s2.length());
        first += index + s1.length();
        res.append(line, first, line.length() - first);
    } else {
        res.append(line);
    }
//    std::cout << "funka?: " << res << "\n";
    return (res);
}