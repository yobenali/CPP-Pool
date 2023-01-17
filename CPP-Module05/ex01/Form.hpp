#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const name;
    bool    isSigned;
    const int signGrade;
    const int execGrade;
public:
    Form();
    Form(std::string const pName, bool pIsSigned, const int pSignGrade, const int pExecGrade);
    Form(const Form &obj);
    Form &operator=(const Form &obj);
    ~Form();

    std::string getName() const;
    bool    getSigned() const;
    int getSignGrade() const;
    int getexecGrade() const;

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
    void beSigned(Bureaucrat &obj);
};

std::ostream& operator<<(std::ostream& out, const Form &obj);

#endif