#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	bool operator>(Fixed const &obj) const;
	bool operator<(Fixed const &obj) const;
	bool operator>=(Fixed const &obj) const;
	bool operator<=(Fixed const &obj) const;
	bool operator==(Fixed const &obj) const;
	bool operator!=(Fixed const &obj) const;
	Fixed &operator=(Fixed const &obj);

	Fixed operator+(Fixed const &obj);
	Fixed operator-(Fixed const &obj);
	Fixed operator*(Fixed const &obj);
	Fixed operator/(Fixed const &obj);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed &obj);

#endif