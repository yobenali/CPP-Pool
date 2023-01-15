#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &obj);
    Brain &operator=(const Brain &obj);
    ~Brain();

    std::string const &getIdeas(int i) const;
    void    setIdea(std::string idea, size_t index);
};

#endif