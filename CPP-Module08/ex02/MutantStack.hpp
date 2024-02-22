#ifndef MUTANTSTACK_HPP_
# define MUTANTSTACK_HPP_

# include <stack>

template <class T, class Container = std::deque<T> > class MutantStack
: public std::stack<T, Container> {
    public:
        MutantStack() {}
        MutantStack(const MutantStack& copy) : std::stack<T, Container>(copy) { //lo de std::stack<T, C> está bien?
            *this = copy;
        }
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T, Container>::operator=(other); //this-> necesario?
            }
            return *this;
        }

        typedef typename std::stack<T, Container>::container_type::iterator iterator;

        iterator begin() {return std::stack<T, Container>::c.begin();} 
        //entender por qué hay que usar ::c.begin() para que funcione
        //creo que lo que hace es crear un objeto? ni idea la vd
        //probar con gpt a ve si lo pilla
        iterator end() {return std::stack<T,Container>::c.end();}
    private:
};

//necesito implementar los otros iteradores de deque? (const_iterator, const_reverse_iterator, reverse_iterator)

//lo de container = std::deque<T> es para poder implementar los iterators?
//typedef typename -> https://stackoverflow.com/questions/18385418/c-meaning-of-a-statement-combining-typedef-and-typename
//::container_type accede al tipo de container que usa stack (esto se puede explicar mejor) en este caso deque<T>
//deque tiene dentro un typedef iterator, el cual estamos accediendo para crear nuestro iterador. "typedef typename _Base::iterator                   iterator;"
//https://learn.microsoft.com/es-es/cpp/standard-library/deque-class?view=msvc-170
//https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-iterator-define.html
//^^^^ejemplo de como definir el iterador
#endif