#ifndef ARRAY_HPP_
# define ARRAY_HPP_

//optional file Array.tpp?
//  |
//  v
//It's typically used to denote that the source file contains implementations of 
//templated methods (as opposed to putting the implementation in the header file).

template <class T> class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        ~Array();

        Array& operator=(const Array& other);
        int size() const; //unsigned int?
    private:
};

//figure out how to work with class templates, define what the constructors and destructor do
//(either in this file or in a .tpp file)
//add header to work with exceptions
//why the need to use new[]
//Try to compile int * a = new int(); then display *a

#endif
