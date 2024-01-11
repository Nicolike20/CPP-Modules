#ifndef SERIALIZER_HPP_
# define SERIALIZER_HPP_

# include <iostream>
# include <string>
# include <stdint.h>

struct Data {
    std::string s;
    int n;
};

class Serializer {
    public:
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
        Serializer();
        Serializer(const Serializer &copy);

        Serializer& operator=(const Serializer &other);
};

#endif
