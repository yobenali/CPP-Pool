 #include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 0, 72, 45)
{    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 0, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): Form("RobotomyRequestForm", 0, 72, 45), target(obj.target)
{
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
        else if (executor.getGrade() > 150 || executor.getGrade() > this->getexecGrade())
            throw GradeTooLowException();
    }
    if (time(NULL) % 2)
    {
        std::cout << "Robotomy making some drilling noises!!!" << std::endl;
        std::cout << "The " << target << " has been robotomized successfully" << std::endl;
    }
    else
        std::cout << "The " << target << " has been failed :(" << std::endl;
}

std::string RobotomyRequestForm::getTarget()
{
    return this->target;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm &obj)
{
    out << "Form " << obj.getName() << std::endl;
    return (out);
}