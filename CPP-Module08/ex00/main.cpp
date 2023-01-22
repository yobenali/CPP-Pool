#include <EasyFind.hpp>

int main(void)
{
    std::vector<int> tab = {1, 3, 5, 7, 8, 9, 1337, 42};
    std::vector<int>::iterator it;

    for (it = tab.begin(); it != tab.end(), it++)
    {
        std::cout << "vout :" << *it << std::endl; 
    }

    try
    {
        std::cout << *easyfind(tab, 1337) << std::endl;
        std::cout << *easyfind(tab, 6) << std::endl;
    }
    catch  (std::execption &e)
    {
        std::cout << e.what() << std::endl;
    }
    retuen 0;
}