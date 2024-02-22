#ifndef MUTANTSTACK_HPP_
# define MUTANTSTACK_HPP_

# include <stack>

template <class T, class Container = std::deque<T> > class MutantStack
: public std::stack<T, Container> {
    public:
        MutantStack() {}
        MutantStack(const MutantStack& copy) : std::stack<T, Container>(const MutantStack& copy) { //lo de std::stack<T, C> está bien?
            *this : other;
        }
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T, Container>::operator=(other); //this-> necesario?
            }
            return *this;
        }

        typedef typename std::stack<T, Container>::container_type::iterator iterator;
    private:
};

//necesito implementar los otros iteradores de deque? (const_iterator, const_reverse_iterator, reverse_iterator)

//lo de container = std::deque<T> es para poder implementar los iterators?
//typedef typename -> https://stackoverflow.com/questions/18385418/c-meaning-of-a-statement-combining-typedef-and-typename
//::container_type accede al tipo de container que usa stack (esto se puede explicar mejor) en este caso deque<T>
//deque tiene dentro un typedef iterator, el cual estamos accediendo para crear nuestro iterador. "typedef typename _Base::iterator                   iterator;"
//https://learn.microsoft.com/es-es/cpp/standard-library/deque-class?view=msvc-170
#endif