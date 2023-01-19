#include <iostream>
#include "Serialization.h"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data a;
    a.c = 'H';
    a.i = 1337;
    a.f = 3.14;
    a.str = "Hated";

    uintptr_t converts = serialize(&a);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>> converts to unsigned integer type uintptr_t >>>>>>>>>>>>>>>>>>>>>>>\n";
    std::cout << converts << std::endl;
    Data *b = deserialize(converts);
    std::cout << "\n>>>>>>>>>>>>>>>>>>>>>>>        converts to a pointer to Data        >>>>>>>>>>>>>>>>>>>>>>>\n";
    std::cout << "Char type : " << b->c << std::endl;
    std::cout << "int type : " << b->i << std::endl; 
    std::cout << "float type : " << b->f << std::endl; 
    std::cout << "string type : " << b->str << std::endl; 

    return (0);
}