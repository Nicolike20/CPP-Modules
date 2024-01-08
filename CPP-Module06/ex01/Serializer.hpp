#ifndef SERIALIZER_HPP_
# define SERIALIZER_HPP_

# include <iostream>

class Serializer {
    public:
        ~Serializer();

        static uintptr_t serialize(Data* ptr); //revisar static
        static Data* deserialize(uintptr_t raw);
    private:
        Serializer();
        Serializer(const Serializer &copy);

        Serializer& operator=(const Serializer &other);
};

//data structure?

#endif
