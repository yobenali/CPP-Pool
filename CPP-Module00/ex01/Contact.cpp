#include "Contact.hpp"

void	Contact::setDarkestSecret()
{
	std::cout << "Enter Darkest Secret :";
	std::getline(std::cin, this->darkestSecret);
	if(this->darkestSecret.empty())
		std::exit(0);
}

void	Contact::setPhoneNumber()
{
	std::cout << "Enter Phone Number :";
	std::getline(std::cin, this->phoneNumber);
	if(this->phoneNumber.empty())
		std::exit(0);
}

void	Contact::setNickName()
{
	std::cout << "Enter Nike Name :";
	std::getline(std::cin, this->nickName);
	if(this->nickName.empty())
		std::exit(0);
}

void	Contact::setLastName()
{
	std::cout << "Enter Last Name :";
	std::getline(std::cin, this->lastName);
	if(this->lastName.empty())
		std::exit(0);
}

void	Contact::setFirstName()
{
	std::cout << "Enter First Name :";
	std::getline(std::cin, this->firstName);
	if(this->firstName.empty())
		std::exit(0);
}

std::string	Contact::getFirstName()
{
	return this->firstName;
}

std::string	Contact::getLastName()
{
	return this->lastName;
}

std::string	Contact::getNickName()
{
	return this->nickName;
}

std::string	Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string	Contact:: getDarkestSecret()
{
	return this->darkestSecret;
}