#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span tt = Span(3);

    try
    {
        std::cout << tt.longestSpan() << std::endl;
        std::cout << tt.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    tt = Span(10000);
    try
    {
        for (int i = 0; i < 10000; i++)
        {
            tt.addNumber(i + 1);
        }
        std::cout << tt.longestSpan() << std::endl;
        std::cout << tt.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    tt = Span(500);
    std::vector<int> V;
    for (int i = 0; i < 500; i++)
        V.push_back(i + 1);
    tt.addNumber(V.begin(), V.end());
    return 0;
}