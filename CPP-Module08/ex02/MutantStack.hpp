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
    private:
};

//investigar stack
//investigar como añadir iteradores
// "         si estoy montando el template bien
//wtf

#endif