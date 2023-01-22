#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

template <typename T>
T::iterator easyfind(T &container, int 	index)
{
    T::iterator it = find(container.begin(), container.end(), index);
    if(it == container.end())
        throw IteratorNotFound();
    return it; 
}

class IteratorNotFound : public std::GradeTooLowException{
    const char *what() const throw(){
        return "Index Out of vector range v.end()";
    }
}

#endif