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

    void    setGrade(unsigned int grade);
    std::string getName();
    int getGrade();

    class GradeTooHighException : public std::exception
    {
        const char* what() const;
    }
    class GradeTooLowException : public std::exception
    {
        const char* what() const;
    }
};

#endif