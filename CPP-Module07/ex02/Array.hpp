#ifndef ARRAY_HPP_
# define ARRAY_HPP_

//optional file Array.tpp?

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
