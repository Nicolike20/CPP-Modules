#include "Serializer.hpp"

//POR QUE REINTERPRET_CAST?

int main() {
    Data *d = new Data;

    d->s = "Test";
    d->n = 42;

    std::cout   << "data:\ns -> " << d->s
                << "\nn -> " << d->n << "\n\n";

    uintptr_t raw = Serializer::serialize(d);

    std::cout << "Raw: " << raw << "\n\n";

    Data *deser = Serializer::deserialize(raw);

    std::cout   << "Deserialized:\ns -> " << deser->s
                << "\nn -> " << deser->n << "\n";

    delete d;
    return (0);
}