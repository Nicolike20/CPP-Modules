#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <exception>

class Span {
	public:
        Span(const Span& copy);
        Span(unsigned int N); //subject
        ~Span();

        Span& operator=(const Span& other);

        void    addNumber(int num); //unsigned int?
        int     shortestSpan(); //unsigned int? //const?
        int     longestSpan(); //unsignedd int? //const?
        void    addMore(int num); //unsigned int?

        class FullSpanException : public std::exception {
            public: const char* what() const throw();
        };

        class EmptySpanException : public std::exception {
            public: const char* what() const throw();
        };
	private:
        Span();
        //?
};

//wtf

#endif
