#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <exception>
# include <iostream>

template <class T> class Array {
    public:
        Array() : array_(NULL), size_(0) {
            std::cout << "Array default constructor called\n"; //quitar?
        }
        Array(unsigned int n) : array_(new T[n]), size_(n) {
            std::cout << "Array constructor called\n"; //quitar?
        }
        Array(const Array& copy) /*Array()?*/ /*: array_(NULL)?*/ {
            *this = copy;
            std::cout << "Array copy constructor called\n"; //quitar?
        }
        ~Array() {
            std::cout << "Array destructor called\n"; //quitar?
            delete[] array_;
        }

        Array& operator=(const Array& other) {
            std::cout << "Array assignment operator called\n"; //quitar?
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

        T& operator[](std::size_t index) { //const T& ........ const? //size_t porque si no da problemas al compararlo con index
            if (index >= size_ || index < 0) {
                throw Array::InvalidIndexException();
            } else {
                return array_[index];
            }
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
