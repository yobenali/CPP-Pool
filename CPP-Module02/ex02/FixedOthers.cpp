#include "Fixed.hpp"

Fixed Fixed::operator+(Fixed const &obj)
{
    return Fixed(this->number + obj.number);
}
Fixed Fixed::operator-(Fixed const &obj)
{
    return Fixed(this->number - obj.number);
}
Fixed Fixed::operator*(Fixed const &obj)
{
    return Fixed(this->number * obj.number);
}
Fixed Fixed::operator/(Fixed const &obj)
{
    return Fixed(this->number / obj.number);
}
Fixed    Fixed::operator++(int)
{ 
    return (this->number++);
}
Fixed    Fixed::operator++()
{
    ++this->number;
    return (*this);
}
Fixed    Fixed::operator--(int)
{
    this->number--;
    return (*this);

}
Fixed    Fixed::operator--()
{
    return (this->number--);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::getRawBits(void) const
{
	return this->number;
}