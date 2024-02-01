#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <exception>

class Span {
	public:
        Span(); //private?
        Span(const Span& copy); //private? dont think so;
        Span(unsigned int N); //subject
        ~Span();

        Span& operator=(const Span& other);

        void addNumber(int num); //unsigned int?
        int shortestSpan();
        int longestSpan();
        //function to add many numbers at once using a range of iterators;

        class FullSpanException : public std::exception {
            public: const char* what() const throw();
        };

        class EmptySpanException : public std::exception {
            public: const char* what() const throw();
        };
	private:
        //?
};

//wtf

#endif
