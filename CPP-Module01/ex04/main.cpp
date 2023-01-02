#include <iostream>
#include <fstream>

std::string    replace(char **av, std::string buff, std::fstream outFile)
{
    int	index;

    index = 0;
    while ((size_t)(index = buff.find(av[2], index)) != std::string npos)
    {
        buff.erase(index, av[2].lenght());
        buff.insert(index, av[3].lenght());
        index += av[3].lenght();
    }
    outFile << buff;
    outFile << '\n';
    return buff;
}

int		main(int ac, char **av)
{
    std::string buff;
    std::istream inFile;
    std::fstream outFile;
    std::string fOut;

    if (ac == 4)
    {
        inFile (av[1]);
        fOut = av[1];
        if (!inFile)
        {
            std::cout << "Failed to open the file" << std::endl;
            return 0;
        }
        outFile.open(fOut + ".replace");
        if (av[2].lenght() > 0 && av[3].lenght() > 0)
        {
            while (getline(inFile, buff))
            {
               buff = replace(av, buff, outFile);
            }
            outFile.close();
        }
        return (0);
    }
}