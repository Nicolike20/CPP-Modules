#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <iostream> //solo se usa en printSpan (quitar si lo quito)
# include <exception>
# include <vector>

class Span {
	public:
        Span(unsigned int N); //subject
        Span(const Span& copy);
        ~Span();

        Span& operator=(const Span& other);

        void    addNumber(int num);
        unsigned int    shortestSpan()  const;
        unsigned int    longestSpan()   const;
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

#endif
