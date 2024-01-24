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
            delete[] array_;
        }

        Array& operator=(const Array& other) {
            if (this != &other) {
                if (array_ != NULL) {
                    delete[] array_;
                }
                array_ = new T[other.size_];
                size_ = other.size_;
                for (int i = 0; i < size_; i++) {
                    array_[i] = other.array_[i];
                }
                return *this;
            }
            return *this;
        }
        unsigned int size() const {
            return size_;
        }

        class InvalidIndexException : public std::exception {
            public: const char* what() const throw() {
                return "Invalid index: index is out of bounds"; //\n?
            }
        };
    private:
        T *array_;
        unsigned int size_;
};

//why the need to use new[]
//Try to compile int * a = new int(); then display *a

#endif
