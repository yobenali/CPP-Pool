#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	
	std::cout << "a 1 is :" << a << std::endl;
	std::cout << "a 2 is :" << ++a << std::endl;
	std::cout << "a 3 is :" << a << std::endl;
	std::cout << "a 4 is :" << a++ << std::endl;
	std::cout << "a 5 is :" << a << std::endl;
	std::cout << "a 6 is :" << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}