#include <iostream>
#include <iomanip>
#include <string>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	else if (ac > 1)
	{
		while (av[i])
		{
			j = 0; 
			while (av[i][j])
			{
				if (isalpha(av[i][j]))
					putchar(toupper(av[i][j]));
				else
					putchar(av[i][j]);
				j++;
			}
			i++;
		}
		std :: cout << std :: endl;
	}
	return (0);
}
