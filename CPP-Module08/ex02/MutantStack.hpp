#ifndef MUTANTSTACK_HPP_
# define MUTANTSTACK_HPP_

# include <stack>

template <class T, class Container = std::deque<T> > class MutantStack
: public std::stack<T, Container> {
    public:
        MutantStack() {}
        MutantStack(const MutantStack& copy) : std::stack<T, Container>(copy) {
            *this = copy;
        }
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T, Container>::operator=(other);
            }
            return *this;
        }

        typedef typename std::stack<T, Container>::container_type::iterator iterator;

        iterator begin() {return std::stack<T, Container>::c.begin();} 
        //check std::stack en cppreference. 'c' es un miembro de stack que permite acceder al container
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


/*mas info sobre los "underlying containers": 

In C++, when we talk about the "underlying container" in the context of data structures like std::stack, 
std::queue, or std::priority_queue, we are referring to the container that is used internally to store 
the elements of the data structure.

For example, std::stack is a container adapter, meaning it provides a restricted interface 
to manipulate a particular type of container. By default, std::stack uses std::deque as 
its underlying container, but you can specify other containers such as std::vector or std::list if needed.

So, when you push elements onto a std::stack, it internally stores these elements 
in its underlying container. The "underlying container" is essentially the container 
that holds the data for the data structure you're using, encapsulated within the adapter provided 
by the C++ Standard Library. This design allows you to use the familiar interface of 
the data structure (e.g., push(), pop(), top() for std::stack) 
while benefiting from the flexibility of different container implementations.
*/
#endif