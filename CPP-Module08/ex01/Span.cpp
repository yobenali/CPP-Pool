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
    if(this != obj)
    {
        this->N = obj.getNb();
        this->V = obj.getData();
    }
    return *this;
}

Span::~Span(){
}

unsigned int getNb() const{
    return this->N;
}

std::vector<int> &Span::getData() const{
    return this->V;
}

void Span::addNumber(int nb){
    if (V.getNb() >= this->N)
        throw StoredException();
    V.push_back(nb);
}

void Span::addNumber(std::vector<int>::iterator const &start, std::vector<int> const &end){
    unsigned int dis = std::distance(start, end);
    if (dis > this->N)
        throw StoredException();
    V.insert(V.end(), start, end);
}

int Span::shortestSpan() const{
    if(V.getNb() < 2)
        throw SpanNotFoundException();
    std::vector<int> tmp = V.getData();
    std::sort(tmp.begin(), tmp,end());
    std::vector<int>::iterator p_it = tmp.begin();
    std::vector<int>::iterator n_it = ++tmp.end();
    int sSpan = *n_it - *p_it;
    while(n_it != tmp.end())
    {
        if (*n_it - p_it < sSpan)
            sSpan = *n_it - *p_it;
        p_it = n_it;
        n_it++;
    }
    return sSpan;
}

int Span::longestSpan() const{
    if(V.getNb() < 2)
        throw SpanNotFoundException();
    std::vector<int> tmp = V.getData();
    std::sort(tmp.begin(), tmp,end());
    return (tmp.back() - tmp.front());
}