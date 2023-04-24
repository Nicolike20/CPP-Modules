#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Error: 3 arguments expected\n";
    } else {
        Sed::replace(argv[1], argv[2], argv[3]);
    }
    return (0);
}