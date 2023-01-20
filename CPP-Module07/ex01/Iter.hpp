#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, unsigned int lenArray, void (*fct)(T &)){
	if (array == NULL)
		return ;
	for (unsigned int i = 0; i < lenArray; i++)
		fct(array[i]);
};

template <typename T>
void iter(const T *array, unsigned int lenArray, void (*fct)(const T &)){
	if (array == NULL)
		return ;
	for (unsigned int i = 0; i < lenArray; i++)
		fct(array[i]);
};

#endif