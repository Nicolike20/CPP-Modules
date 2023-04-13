#ifndef SED_HPP_
# define SED_HPP_

# include <iostream>
# include <fstream>
# include <string>

class Sed {
    public:
        Sed();
        ~Sed();
        static void replace(std::string fileName, std::string s1, std::string s2);

    private:
        static std::string findStr(std::string line, std::string s1, std::string s2);
};

#endif