#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> V;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();

        unsigned int getNb() const;
        std::vector<int> getData() const;
        void addNumber(int nb);
        void addNumber(std::vector<int>::iterator &start, std::vector<int>::iterator &end);
        int shortestSpan() const;
        int longestSpan() const;

        class StoredException : public std::exception{
            const char *what() const throw(){
                return "vector full";
            }
        };

        class SpanNotFoundException : public std::exception{
            const char *what() const throw(){
                return "No Span can be found";
            }
        };
};

#endif