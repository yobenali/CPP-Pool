#include "Fixed.hpp"

Fixed Fixed::operator+(Fixed const &obj)
{
    Fixed content(*this);
    return(this->number + content.number);
}
Fixed Fixed::operator-(Fixed const &obj)
{
    Fixed content(*this);
    return(this->number - content.number);
}
Fixed Fixed::operator*(Fixed const &obj)
{
    Fixed content(*this);
    return(this->number * content.number);
}
Fixed Fixed::operator/(Fixed const &obj)
{
    Fixed content(*this);
    return(this->number / content.number);
}