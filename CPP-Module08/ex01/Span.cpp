#include "Span.hpp"

Span::Span() {}

Span::Span(const Span& copy) {
    *this = copy;
}

Span::Span(unsigned int N) : size_(N) {}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        size_ = other.size_;
        v_ = other.v_;
    }
    return *this;
}

void    Span::printSpan() const {
    /////////temp//////////
    std::cout << "Span:"; //si voy a dejar esto, quito esta parte? ya veremo
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
    //printSpan();
    ///////////////////////
}

void    Span::addMore(std::vector<int>::iterator b, std::vector<int>::iterator e) { //b = begin, e = end
    /*for (std::vector<int>::iterator it = b; it != e; it++) {
            addNumber(*it);
    }*/
    if (v_.size() + std::distance(b, e) > size_) {
        throw FullSpanException();
    } for (std::vector<int>::iterator it = b; it != e; it++) {
        v_.push_back(*it);
    }
}

unsigned int    Span::longestSpan() const {
    if (v_.size() <= 1) {
        throw EmptySpanException();
    }
    return *max_element(v_.begin(), v_.end()) - *min_element(v_.begin(), v_.end());
}


unsigned int    Span::shortestSpan() const {
    if (v_.size() <= 1) {
        throw EmptySpanException();
    }
    std::vector<int> sorted(v_);
    sort(sorted.begin(), sorted.end());
    std::vector<int>::const_iterator it = sorted.begin();
    int sp = *(it + 1) - *it;
    while (it + 1 != sorted.end()) {
        if ((*(it + 1) - *it) < sp) {
            sp = *(it + 1) - *it;
        }
        it++;
    }
    return sp;
}




const char* Span::FullSpanException::what() const throw() {
    return "Exception: Span is full";
}

const char* Span::EmptySpanException::what() const throw() {
    return "Exception: Not enough elements in Span"; //ta bien el mensaje?
}