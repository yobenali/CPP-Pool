#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(std::string target)
{
    std::ofstream outFile;
    outFile.open(target + "_shrubbery");
    outFile << "                  v\n";
    outFile << "                 >X<\n";
    outFile << "                 A\n";
    outFile << "                d$d\n";
    outFile << "              .d\\$$b.\n";
    outFile << "            .d$i$$\\$$b\n";
    outFile << "               d$$@b\n";
    outFile << "              d\\$$$ib\n";
    outFile << "            .d$$$\\$$$b\n";
    outFile << "          .d$$@$$$$\\$$ib.\n";
    outFile << "              d$$i$$b\n";
    outFile << "             d\\$$$$@$b\n";
    outFile << "          .d$@$$\\$$$$$@b.\n";
    outFile << "        .d$$$$i$$$\\$$$$$$b.\n";
    outFile.close();

}
Shrubbery::Shrubbery(const Shrubbery &obj)
{
    *this = obj;
    std::cout << "Shrubbery Copy Constructor" << std::endl;
}

Shrubbery &Shrubbery::operator=(const Shrubbery &obj)
{
    *this = obj;
    return (*this);
}

Shrubbery::~Shrubbery()
{
    std::cout << "Default Destructor called" << std::endl;    
}