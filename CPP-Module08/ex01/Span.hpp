#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <iostream>
# include <exception>
# include <vector>

class Span {
	public:
        Span(const Span& copy);
        Span(unsigned int N); //subject
        ~Span();

        Span& operator=(const Span& other);

        void    addNumber(int num);
        int     shortestSpan(); //unsigned int? //const?
        int     longestSpan(); //unsignedd int? //const?
        void    addMore(std::vector<int>::iterator b, std::vector<int>::iterator e);

        void    printSpan() const; //TEMP;

        class FullSpanException : public std::exception {
            public: const char* what() const throw();
        };

        class EmptySpanException : public std::exception {
            public: const char* what() const throw();
        };
	private:
        Span();
        std::vector<int> v_;
        unsigned int size_;
        
};

//wtf

#endif
