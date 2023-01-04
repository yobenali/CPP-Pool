#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int number;
		static const int fNumber;
public:
	Fixed();
	Fixed(const Fixed &data);
	~Fixed();
	Fixed &operator=(Fixed const &obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif