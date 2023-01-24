#include "Span.hpp"

Span::Span(){
    this->N = 0; 
}

Span::Span(unsigned int N){
    this->N = N;
}

Span::Span(const Span &obj){
    this->N = obj.getNb();
    this->V = obj.getData();
}

Span &Span::operator=(Span const &obj){
    if(this != &obj)
    {
        this->N = obj.getNb();
        this->V = obj.getData();
    }
    return *this;
}

Span::~Span(){
}

unsigned int Span::getNb() const{
    return this->N;
}

std::vector<int> Span::getData() const{
    return this->V;
}

void Span::addNumber(int nb){
    if (V.size() >= this->N)
        throw StoredException();
    V.push_back(nb);
}

void Span::addNumbers(unsigned int dis){
    if (dis >= this->N)
        throw StoredException();
    for (unsigned int i = 0; i < dis; i++)
        V.push_back(rand());
}

int Span::shortestSpan() const{
    if(V.size() < 2)
        throw SpanNotFoundException();
    std::vector<int> tmp = V;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator p_it = tmp.begin();
    std::vector<int>::iterator n_it = ++tmp.begin();
    int sSpan = *n_it - *p_it;
    while(n_it != tmp.end())
    {
        if (*n_it - *p_it < sSpan)
            sSpan = *n_it - *p_it;
        p_it = n_it;
        n_it++;
    }
    return sSpan;
}

int Span::longestSpan() const{
    if(V.size() < 2)
        throw SpanNotFoundException();
    std::vector<int> tmp = V;
    std::sort(tmp.begin(), tmp.end());
    return (tmp.back() - tmp.front());
}