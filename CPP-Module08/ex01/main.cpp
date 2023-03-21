#include "Span.hpp"

int main()
{
    srand(time(NULL));
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

    tt = Span(15000);
    try
    {
        for (int i = 0; i < 15000; i++)
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

    tt = Span(400);
    try
    {
        tt.addNumbers(460);
        std::cout << tt.longestSpan() << std::endl;
        std::cout << tt.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}