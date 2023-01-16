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
    Bureaucrat(std::string const name, unsigned int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);
    GradeIncrement();
    Gradedecrement();

    int    setGrade(unsigned int grade);
    const std::string getName() const;
    int getGrade();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
};

#endif