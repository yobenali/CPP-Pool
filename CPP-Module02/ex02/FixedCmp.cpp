#include "Fixed.hpp"

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