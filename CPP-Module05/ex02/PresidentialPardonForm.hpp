#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
    ~PresidentialPardonForm();

    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};
std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm  &obj);
#endif