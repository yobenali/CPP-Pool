#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &data)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = data;
}

Fixed	&Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}
