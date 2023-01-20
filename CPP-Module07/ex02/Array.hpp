#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>

class Array
{
private:
	T *array;
	unsigned int aSize;
public:
	Array(): aSize(0){
		array = new T[aSize]();
	}
	Array(unsigned int n): aSize(n){
		array = new T[aSize]();
	}
	Array(const Array &tObj): aSize(tObj.size()){
		this->array = new T[aSize]();
		for (unsigned int i = 0; i < aSize; i++)
			array[i] = tObj.array[i];
	}
	Array &operator=(const Array &tObj){
		if (this->array != NULL)
			delete[] this->array;
		this->aSize = tObj.size();
		this->array = new T[this->aSize]();
		for (unsigned int i = 0; i < aSize; i++)
			array[i] = tObj.array[i];
		return *this;
	}
	
	T &operator[](int i) const
	{
		if (i < 0 || (unsigned int)i >= this->size())
			throw IndexOutOfBoundsException();
		return this->array[i];
	}

	unsigned int size() const{
		return this->aSize;
	}

	~Array()
	{
		if (this->array != NULL)
			delete[] this->array;
	}
	
	class IndexOutOfBoundsException : public std::exception
    {
        const char* what() const throw()
		{
    		return "Invalide Index Out Of Bounds";
		}
    };
	
};

#endif