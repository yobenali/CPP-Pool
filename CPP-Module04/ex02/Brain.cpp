#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "ideas";
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

std::string const &Brain::getIdeas(int i) const
{
    return this->ideas[i];
}

void    Brain::setIdea(std::string idea, size_t index)
{
    this->ideas[index] = idea;
}

Brain &Brain::operator=(const Brain &obj)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.getIdeas(i);
    std::cout << "Copy assigment called for Brain" << std::endl;
    return *this;
}
