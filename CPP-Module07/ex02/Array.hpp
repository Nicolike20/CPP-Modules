#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <exception>

template <class T> class Array {
    public:
        Array() : array_(NULL), size_(0) {
            //std::cout?;
        }
        Array(unsigned int n) : array_(new T[n]), size_(n) {
            //std::cout?;
        }
        Array(const Array& copy) /*Array()?*/ /*: array_(NULL)?*/ {
            *this = copy;
            //std::cout?;
        }
        ~Array() {
            delete[] array_; //this->array_?
        }

        Array& operator=(const Array& other) {
            if (this != &other) {
                if (this->array_ != NULL) {
                    delete[] this->array_; //quitar los this->?;
                }
                this->array_ = new T[other.size_];
                this->size_ = other.size_;
                for (int i = 0; i < this->size_; i++) {
                    this->array_[i] = other.array_[i];
                }
                return *this;
            }
            return *this;
        }
        unsigned int size() const {
            return size_; //this->size_?
        } //unsigned int? size_t?

        class InvalidIndexException : public std::exception {
            public: const char* what() const throw(); //do stuff here?;
        };
    private:
        T *array_;
        unsigned int size_;
};

//figure out how to work with class templates, define what the constructors and destructor do
//add header to work with exceptions
//why the need to use new[]
//Try to compile int * a = new int(); then display *a

#endif
