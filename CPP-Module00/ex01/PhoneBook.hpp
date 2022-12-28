#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int 	index;
	int		check;
public:
	PhoneBook();
	void	setIndex();
	void	setChecker();
	int		getChecker();
	bool	add();
	void	search();
};

bool 	checkIfAlphabet(std::string name);
bool 	checkIfDigit(std::string name);
#endif