#ifndef SPAN_HPP_
# define SPAN_HPP_

class Span {
	public:
        Span(); //private?
        Span(const Span& copy); //private? dont think so;
        Span(unsigned int N); //subject
        ~Span();

        Span& operator=(const Span& other);
	private:
};

//wtf

#endif
