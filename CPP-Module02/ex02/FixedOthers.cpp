#include "Fixed.hpp"

Fixed Fixed::operator+(Fixed const &obj)
{
    Fixed temp;
 
    temp.setRawBits((this->number + obj.number) >> this->fNumber);
    return (temp);
}
Fixed Fixed::operator-(Fixed const &obj)
{
    Fixed temp;
 
    temp.setRawBits((this->number - obj.number) >> this->fNumber);
    return (temp);
}
Fixed Fixed::operator*(Fixed const &obj)
{
    Fixed temp;
 
    temp.setRawBits((this->number * obj.number) >> this->fNumber);
    return (temp);
}
Fixed Fixed::operator/(Fixed const &obj)
{
    Fixed temp;
 
    temp.setRawBits((this->number / obj.number) >> this->fNumber);
    return (temp);
}
Fixed    Fixed::operator++(int)
{
    Fixed content(*this);
    this->number++;
    return (content);
}
Fixed    Fixed::operator++()
{
    ++this->number;
    return (*this);
}
Fixed    Fixed::operator--(int)
{
   Fixed content(*this);
    this->number--;
    return (content);
}

Fixed    Fixed::operator--()
{
    --this->number;
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::getRawBits(void) const
{
	return this->number;
}