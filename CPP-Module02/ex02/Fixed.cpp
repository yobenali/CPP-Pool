#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
}

Fixed::Fixed(float const Fixed)
{
	this->number = (roundf(Fixed * 256));
}

Fixed::Fixed(const int Fixed)
{
	this->number = (Fixed << this->fNumber);
}

Fixed::Fixed(const Fixed &data)
{
	*this = data;
}

Fixed	&Fixed::operator=(Fixed const &obj)
{
	this->number = obj.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	return ((float) this->number / 256);
}

int Fixed::toInt( void ) const
{
	return (this->number >> this->fNumber);
}

Fixed::~Fixed()
{
}

std::ostream& operator<<(std::ostream& out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}