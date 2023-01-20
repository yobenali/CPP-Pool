#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

template <typename T>
 	void swap(T &x, T &y){
		T tmp;
		tmp = x;
		x = y; 
		y = tmp;
	}

template <typename N>
	N const &min(N const &x, N const &y){
		return (x <= y ? x : y);
	}

template <typename X>
	X const &max(X const &x, X const &y){
		return (x >= y ? x : y);
	}

#endif