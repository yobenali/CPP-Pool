#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
    std::string const name;
    unsigned int grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);
    Bureaucrat operator++();
    Bureaucrat operator--();

    std::string getName();
    int getGrade();
};

#endif