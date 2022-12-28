#include "Contact.hpp"
#include "PhoneBook.hpp"

bool checkIfAlphabet(std::string name)
{
	for (int i = 0; name[i]; i++)
	{
		if (!std::isalpha(name[i]))
			return true;
	}
	return false;
}

bool checkIfDigit(std::string name)
{
	for (int i = 0; name[i]; i++)
	{
		if (!std::isdigit(name[i]))
			return true;
	}
	return false;
}

int main()
{
	PhoneBook pb;
	std::string cmd;

	std::cout << "Welcome to PhoneBook" << std::endl << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
	std::cout << "PhoneBook> :";
	while (std :: getline(std :: cin >> std::ws, cmd))
	{
		if (!cmd.compare("EXIT"))
			break;
		else if (!cmd.compare("ADD"))
		{
			if (!pb.add())
			{
				std :: cout << "Invalid Input" << std::endl;
				std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
				std::cout << "PhoneBook> :";
				continue;
			}
			std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
			std::cout << "PhoneBook> :";
		}
		else if (!cmd.compare("SEARCH"))
		{
			pb.search();
		}
		else
		{
			std::cout << "Invalide Input" << std::endl;
			std::cout << "Enter a command : |   ADD   | SEARCH |  EXIT  |" << std::endl;
			std::cout << "PhoneBook> :";
		}
	}
}