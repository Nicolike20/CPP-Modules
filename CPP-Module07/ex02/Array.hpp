#ifndef ARRAY_HPP_
# define ARRAY_HPP_

//optional file Array.tpp?
//  |
//  v
//It's typically used to denote that the source file contains implementations of 
//templated methods (as opposed to putting the implementation in the header file).

template <class T> class Array {
    public:
        Array() {
            //do stuff here;
        }
        Array(unsigned int n) {
            //do stuff here;
        }
        Array(const Array& copy) {
            //do stuff here;
        }
        ~Array() {
            //do stuff here;
        }

        Array& operator=(const Array& other) {
            //do stuff here;
        }
        int size() const {
            //do stuff here;
        } //unsigned int? size_t?

        //add exception for out of index call
    private:
        //private attributes?
};

//figure out how to work with class templates, define what the constructors and destructor do
//(either in this file or in a .tpp file) -> figure out if i should use .tpp files (it doesn't seem to matter that much)
//add header to work with exceptions
//why the need to use new[]
//Try to compile int * a = new int(); then display *a

#endif
