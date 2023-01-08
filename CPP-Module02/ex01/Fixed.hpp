#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int number;
		static const int fNumber = 8;
public:
	Fixed();
	Fixed(float const Fixed);
	Fixed(const int Fixed);
	Fixed(const Fixed &data);
	~Fixed();
	Fixed &operator=(Fixed const &obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed &obj);

#endif