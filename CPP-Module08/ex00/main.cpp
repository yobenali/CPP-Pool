#include "EasyFind.hpp"

int main(void)
{
    std::vector<int> tab;
    std::vector<int>::iterator it;

    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(13);
    tab.push_back(14);
    tab.push_back(17);
    for (it = tab.begin(); it != tab.end(); it++)
    {
        std::cout << "vector out :" << *it << std::endl; 
    }

    try
    {
        std::cout << *easyfind(tab, 13) << std::endl;
        std::cout << *easyfind(tab, 6) << std::endl;
    }
    catch  (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}