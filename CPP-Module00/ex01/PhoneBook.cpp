#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->check = 0;
	std::cout << "the constructor is called" << std::endl;
}

void PhoneBook::setChecker()
{
	if (this->check == 8)
		return ;
	else
		this->check++;
}

int	PhoneBook::getChecker()
{
	return this->check;
}

void PhoneBook::setIndex()
{
	if (this->index >= 7)
		this->index	= 0;
	else
		this->index++;
}

void PhoneBook::search()
{
	int	index = -1;
	std::string userI;
	std::cout << " index  | First Name | Last Name |  NickName |" << std::endl;

	if (this->check == 0)
	{
		std::cout << "No Contacts" << std::endl;
		std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
		std::cout << "PhoneBook> :";
		return ;
	}
	for (int i = 0; i < this->check; i++)
	{
		std::cout << std::setw(4) << i + 1<< "    |";
		if (this->contacts[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << this->contacts[i].getFirstName().substr(0, 9) << ". |";
		else
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "  |";
		if(this->contacts[i].getLastName().length() > 10)
			std::cout << std::setw(10) << this->contacts[i].getLastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].getLastName() << " |";
		if(this->contacts[i].getNickName().length() > 10)
			std::cout << std::setw(10) << this->contacts[i].getNickName().substr(0, 9) << ".|";
		else	
			std::cout << std::setw(10) << this->contacts[i].getNickName() << " |";
		std::cout << std::endl;
	}
	std::cout << "Enter the index of contact :"; 
	if (getline(std::cin, userI))
	{
		if (userI.length() == 1 && userI[0] >= '0' && userI[0] < '9')
			index = userI[0] - '1';
		if(index + 1 > this->check || index < 0)
		{
			std::cout << "Index out of range " << std::endl;
			std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
			std::cout << "PhoneBook> :";
			return ;
		}
		else if (index >= 0 && index < this->check)
		{
			std::cout << "the index     : "<< index + 1 << std::endl;
			std::cout << "First Name    : " << this->contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name     : " << this->contacts[index].getLastName() << std::endl;
			std::cout << "NickName      : " << this->contacts[index].getNickName() << std::endl;
			std::cout << "PhoneNumber   : " << this->contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl;
			std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
			std::cout << "PhoneBook> :";
		}
	}
}

bool PhoneBook::add()
{
	Contact *cTmp;

	cTmp = &this->contacts[this->index];
	(*cTmp).setFirstName();
	while (checkIfAlphabet((*cTmp).getFirstName()) || (*cTmp).getFirstName().empty())
	{
		std::cout << "Invalid input" << std::endl;
		(*cTmp).setFirstName();
	}
	(*cTmp).setLastName();
	while (checkIfAlphabet((*cTmp).getLastName()) || (*cTmp).getLastName().empty())	
	{
		std::cout << "Invalid input" << std::endl;
		(*cTmp).setLastName();
	}
	(*cTmp).setNickName();
	while (checkIfAlphabet((*cTmp).getNickName()) || (*cTmp).getNickName().empty())
	{
		std::cout << "Invalid input" << std::endl;
		(*cTmp).setNickName();
	}
	(*cTmp).setPhoneNumber();
	while (checkIfDigit((*cTmp).getPhoneNumber()) || (*cTmp).getPhoneNumber().empty())
	{
		std::cout << "Invalid input" << std::endl;
		(*cTmp).setPhoneNumber();
	}
	(*cTmp).setDarkestSecret();
	while (checkIfAlphabet((*cTmp).getDarkestSecret()) || (*cTmp).getDarkestSecret().empty())
	{
		std::cout << "Invalid input" << std::endl;
		(*cTmp).setDarkestSecret();
	}
	this->setIndex();
	this->setChecker();
	return true;
}