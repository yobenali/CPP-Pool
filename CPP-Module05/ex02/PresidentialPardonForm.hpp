#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Presidential : public Form
{
private:
    std::string target;
public:
    Presidential(std::string target);
    Presidential(const Presidential &obj);
    Presidential &operator=(const Presidential &obj);
    ~Presidential();
};

#endif