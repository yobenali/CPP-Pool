#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
    int index;
    std::string buff;
    std::ifstream inFile;
    std::ofstream outFile;
    std::string fOut;

    if (ac != 4)
    {
        std::cout << "invalide args" << std::endl;
        return (0);
    }
    if (ac == 4)
    {
        inFile.open(av[1]);
        fOut = av[1];
        if (!inFile)
        {
            std::cout << "Failed to open the file" << std::endl;
            return 0;
        }
        outFile.open(fOut + ".replace");
        if (strlen(av[2]) > 0 && strlen(av[3]) > 0)
        {
            while (getline(inFile, buff))
            {
                index = 0;
                while ((const size_t)(index = buff.find(av[2], index)) != std::string::npos)
                {
                    buff.erase(index, strlen(av[2]));
                    buff.insert(index, av[3]);
                    index += strlen(av[3]);
                }
                outFile << buff<< std::endl;
            }
            outFile.close();
        }
        return (0);
    }
}