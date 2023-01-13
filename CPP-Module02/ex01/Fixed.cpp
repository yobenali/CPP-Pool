#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float const Fixed)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(Fixed * (1 << this->fNumber));
}

Fixed::Fixed(const int Fixed)
{
	this->number = (Fixed * (1 << this->fNumber));
	std::cout << "Int constructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
	return (((float)this->number / (float)(1 << this->fNumber)));
}

int Fixed::toInt( void ) const
{
	return (this->number / (1 << this->fNumber));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
 
std::ostream& operator<<(std::ostream& out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}