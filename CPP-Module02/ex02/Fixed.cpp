#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
}

Fixed::Fixed(float const Fixed)
{
	this->number = roundf(Fixed * (1 << this->fNumber));
}

Fixed::Fixed(const int Fixed)
{
	this->number = (Fixed * (1 << this->fNumber));
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
	return (((float)this->number / (float)(1 << this->fNumber)));
}

int Fixed::toInt( void ) const
{
	return (this->number / (1 << this->fNumber));
}

Fixed::~Fixed()
{
}
 
std::ostream& operator<<(std::ostream& out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

bool Fixed::operator>(Fixed const &obj) const
{
    return (this->number > obj.number);
}

bool Fixed::operator<(Fixed const &obj) const
{
    return (this->number < obj.number);
}

bool Fixed::operator>=(Fixed const &obj) const
{
    return (this->number >= obj.number);
}

bool Fixed::operator<=(Fixed const &obj) const
{
    return (this->number <= obj.number);
}

bool Fixed::operator==(Fixed const &obj) const
{
    return (this->number == obj.number);
}

bool Fixed::operator!=(Fixed const &obj) const
{
    return (this->number != obj.number);
}

Fixed Fixed::min(Fixed &a,  Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
Fixed Fixed::max( Fixed &a,  Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed Fixed::operator+(Fixed const &obj) const
{
    Fixed temp;
 
    temp.setRawBits((this->number + obj.number));
    return (temp);
}

Fixed Fixed::operator-(Fixed const &obj) const
{
    Fixed temp;
 
    temp.setRawBits((this->number - obj.number));
    return (temp);
}

Fixed Fixed::operator*(Fixed const &obj) const
{
    Fixed temp;
 
    temp.setRawBits((this->number * obj.number) / (1 << this->fNumber));
    return (temp);
}

Fixed Fixed::operator/(Fixed const &obj) const
{
    Fixed temp;
 
    temp.setRawBits((this->number / obj.number) * (1 << this->fNumber));
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