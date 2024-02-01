#ifndef EASYFIND_HPP_
# define EASYFIND_HPP_

# include <iostream>
# include <vector>
# include <algorithm>

/*template <class T> class easyfind {
    public:
    private:
};*/

template <class T> void easyfind(const T& t, int n) { //returns void?
    std::find(t.begin(), t.end(), n) != t.end() ? std::cout << "Element found\n" : std::cout << "Element not found\n";
}

#endif
