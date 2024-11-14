#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <exception>
# include <iostream>

template <class T> class Array {
    public:
        Array() : array_(NULL), size_(0) {}
        Array(unsigned int n) : array_(new T[n]), size_(n) {} //deberia proteger esto por si falla la el new?
        Array(const Array& copy) : array_(NULL), size_(0) {
            *this = copy;
        }
        ~Array() {
            delete[] array_;
        }

        Array& operator=(const Array& other) {
            if (this != &other) {
                if (array_ != NULL) {
                    delete[] array_;
                }
                array_ = new T[other.size_]; //proteger esto tb o na?
                size_ = other.size_;
                for (std::size_t i = 0; i < size_; i++) { //size_t pa que no haya problemas al comparar
                    array_[i] = other.array_[i];
                }
                return *this;
            }
            return *this;
        }

        T& operator[](std::size_t index) { //size_t por lo mismo
            if (index >= size_ || index < 0) {
                throw Array::InvalidIndexException();
            } else {
                return array_[index];
            }
        }

        const T& operator[](std::size_t index) const { //const porque si no no se pueden usar objetos const
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
                return "Invalid index: index is out of bounds";
            }
        };
    private:
        T *array_;
        unsigned int size_;
};

#endif