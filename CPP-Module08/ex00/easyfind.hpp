#ifndef EASYFIND_HPP_
# define EASYFIND_HPP_

# include <iostream>
# include <vector>
# include <algorithm>

template <class T> std::vector<int>::const_iterator easyfind(const T& t, int n) {
    return std::find(t.begin(), t.end(), n);
}

#endif
