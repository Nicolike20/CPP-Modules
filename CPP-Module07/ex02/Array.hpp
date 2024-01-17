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

#endif
