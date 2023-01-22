#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
    private:
        unsigned int int N;
        std::vector<int> V;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();

        unsigned int getNb() const;
        std::vector<int> &getData() const;
        void addNumber(int nb);
        int shortestSpan() const;
        int longestSpan() const;

        class StoredException : public std::exception{
            const char *what() const throw(){
                return "vector full";
            }
        }

        class SpanNotFoundException : public std::exception{
            const char *what() const throw(){
                return "No Span can be found";
            }
        }
}

#endif