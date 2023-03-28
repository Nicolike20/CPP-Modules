#include <iostream>

#include <fstream>


//abrir y cerrar archivos con ifstream y ofstream o con open y close?;
//pasar todo esto a otro archivo cpp? / por que hace falta usar clases en este caso?;

void openFile(std::string fileName, std::string s1, std::string s2) {
    
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
        std::cout << infile << " " << line << "\n";
        outfile << line << "\n";
    }

    //file se pone a 0 cuando llega al final del archivo;
    std::cout << infile; //quitar
    std::cout << "\npirateo1: " << s1 << "\n"; //quitar
    std::cout << "pirateo2: " << s2 << "\n"; //quitar
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Error: 3 arguments expected\n";
    } else {
        openFile(argv[1], argv[2], argv[3]);
    }
    return (0);
}