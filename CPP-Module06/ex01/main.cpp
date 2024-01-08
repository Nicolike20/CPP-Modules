#include "Serializer.hpp"

int main() {
//    (void)argc;
//    (void)argv;

    Data *d = new Data;

    d->s = "Test";
    d->n = 42;

    std::cout   << "data: s -> " << d->s
                << "\n      n -> " << d->n << "\n\n";

    uintptr_t raw = Serializer::serialize(d);

    std::cout << "Raw: " << raw << "\n\n";

    Data *deser = Serializer::deserialize(raw);

    std::cout   << "Deserialized: s -> " << deser->s
                << "\n              n -> " << deser->n << "\n";

    delete d;

//    system("leaks -q serializer");
    return (0);
}