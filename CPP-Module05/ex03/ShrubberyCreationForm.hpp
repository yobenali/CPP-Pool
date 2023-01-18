#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm &obj);

#endif