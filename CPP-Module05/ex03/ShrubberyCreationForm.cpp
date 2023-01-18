#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 0, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 0, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): Form("ShrubberyCreationForm", 0, 145, 137), target(obj.target)
{
    *this = obj;
    // std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "Default Destructor called" << std::endl;    
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned())
    {
        if (this->getexecGrade() < executor.getGrade())
            throw GradeTooLowException();
    }
    else
    {
        if (executor.getGrade() < 1)
            throw GradeTooHighException();
        else if (executor.getGrade() > 150)
            throw GradeTooLowException();
    }
    std::ofstream outFile;
    outFile.open(this->target + "_Shrubbery");
    outFile << "                 v\n";
    outFile << "                >X<\n";
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

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm &obj)
{
    out << "Form " << obj.getName() << std::endl;
    return (out);
}