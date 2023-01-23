#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>

class IteratorNotFound : public std::exception{
    const char *what() const throw(){
        return "Index Out of vector range v.end()";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int 	index)
{
    typename T::iterator it = find(container.begin(), container.end(), index);
    if(it == container.end())
        throw IteratorNotFound();
    return it; 
}


#endif