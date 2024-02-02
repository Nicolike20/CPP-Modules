#include "Span.hpp"

Span::Span() {} //private;

Span::Span(const Span& copy) {
    std::cout <<  "Span copy constructor called\n"; //quitar seguramente;
    *this = copy;
}

Span::Span(unsigned int N) : size_(N) {
    std::cout << "Span parameter constructor called\n"; //quitar seguramente;
}

Span::~Span() {
    std::cout << "Span destructor called\n"; //quitar seguramente;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        size_ = other.size_;
        v_ = other.v_;
    }
    return *this;
}

void    Span::printSpan() const {
    /////////temp//////////
    std::cout << "Span:";
    for (std::vector<int>::const_iterator it = v_.begin(); it != v_.end(); it++) {
        std::cout << " " << *it;
    }
    std::cout << "\n";
    ///////////////////////   
}

void    Span::addNumber(int num) {
    if (v_.size() < size_) {
        v_.push_back(num);
    } else {
        throw (FullSpanException());
    }
    /////////temp//////////
    printSpan();
    ///////////////////////
} //unsigned int?


        int     Span::shortestSpan() {
            std::cout << "does nothing\n";
            return 0; //cambiar;
        } //unsigned int? //const?
        int     Span::longestSpan() {
            std::cout << "does nothing\n";
            return 0; //cambiar;
        } //unsignedd int? //const?
        void    Span::addMore(int num) {
            (void) num;
            std::cout << "does nothing\n";
        } //unsigned int?

const char* Span::FullSpanException::what() const throw() {
    return "Exception: Span is full";
}

const char* Span::EmptySpanException::what() const throw() {
    return "Exception: Not enough elements in Span"; //ta bien el mensaje?
}