#include "Iter.hpp"
#include <iostream>

void fct(char &c)
{
	c++;
	putchar(c);
	std::cout << std::endl;
}

void fct1(int& num)
{
	num++;
	std::cout << num << std::endl;
}

void fct3(const std::string &word)
{
	std::cout << word << std::endl;
}

void fct4(float &fnum)
{
	std::cout << fnum << std::endl; 
}

int main(void)
{
	char c[] = {'A', 'B', 'C'};
	int tab[] = {1336, 41, 0};
	const std::string ptr[] = {"hated", "atkiiiiii"};
	float tmp[] = {3.14, 98.99};
	
	std::cout << ">>>>>>>>>>>  iter function template for char   >>>>>>>>>>>\n";
	iter(c, 3, fct);
	std::cout << ">>>>>>>>>>>   iter function template for int  >>>>>>>>>>>\n";
	iter(tab, 3, fct1);
	std::cout << ">>>>>>>>>>>   iter function template for strings  >>>>>>>>>>>\n";
	iter(ptr, 2, fct3);
	std::cout << ">>>>>>>>>>>   iter function template for float   >>>>>>>>>>>\n";
	iter(tmp, 2, fct4);

	return (0);
}

// #include "Iter.hpp"

// class Awesome
// {
//     public:
//     	Awesome( void ) : _n( 42 ) { return; }
//   		int get( void ) const { return this->_n; }
//     private:
//     	int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const& x ) { std::cout << x << std::endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; 
// 	Awesome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
//     return 0;
// }
