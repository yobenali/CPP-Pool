#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
private:
    const std::string name;
    bool    isSigned;
    const int signGrade;
    const int execGrade;
public:
    Form();
    Form(const Form &obj);
    Form &operator=(const Form &obj);
    ~Form();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Form &obj);

#endif