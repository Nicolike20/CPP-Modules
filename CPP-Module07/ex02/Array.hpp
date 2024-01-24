#ifndef ARRAY_HPP_
# define ARRAY_HPP_


template <class T> class Array {
    public:
        Array() : array_(NULL), size_(0) {
            //std::cout?;
        }
        Array(unsigned int n) : array_(new T[n]), size_(n) {
            //std::cout?;
        }
        Array(const Array& copy) {
            //do stuff here;
        }
        ~Array() {
            delete[] this->array_;
        }

        Array& operator=(const Array& other) {
            //do stuff here;
        }
        int size() const {
            //do stuff here;
        } //unsigned int? size_t?

        //add exception for out of index call
    private:
        T *array_;
        unsigned int size_;
};

//figure out how to work with class templates, define what the constructors and destructor do
//add header to work with exceptions
//why the need to use new[]
//Try to compile int * a = new int(); then display *a

#endif
