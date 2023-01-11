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

// static const Fixed ::min(const Fixed &a, const Fixed &b)
// {
//     if (a < b)
//         return (a);
//     else
//         return (b);
// }

// static const Fixed &max(const Fixed &a, const Fixed &b)
// {
//     if (a > b)
//         return (a);
//     else
//         return (b);
// }

// static const Fixed &min(Fixed &a, Fixed &b)
// {
//      if (a < b)
//         return (a);
//     else
//         return (b);
// }

Fixed Fixed::min(Fixed &a,  Fixed &b)
{
    if (a > b)
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
const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}
const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}
