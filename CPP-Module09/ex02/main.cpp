/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:02 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/17 17:25:38 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	parsing(int ac, char **av)
{
	int	i = 1;
	int	j;
	int check;
	
	while (i < ac)
	{
		j = i + 1;
		check = 0;
		while (av[i][check])
		{
			if (!isdigit(av[i][check]))
			{
				std::cerr << "Error non positive INT" << std::endl;
				exit(1);
			}
			check++;
		}
		if (av[i][0] == '-')
		{
			std::cerr << "Error non positive INT" << std::endl;
			exit(1);
		}
		while (j < ac)
		{
			if (!strcmp(av[i], av[j]))
			{
				std::cerr << "Error duplication found" << std::endl;
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int					i = 1;
	unsigned long		p = 0;
	std::deque<int>		myDeque;
	std::vector<int>	myVector;
	if (ac > 1)
	{
		parsing(ac, av);
		std::cout << "Before: ";
		while (i < ac)
		{
			myVector.push_back(atoi(av[i]));
			myDeque.push_back(atoi(av[i]));
			std::cout << myVector[i - 1] << " ";
			i++;
		}
		// std::cout << myVector.size() << std::endl;
		mergeSortV(myVector, 0, myVector.size() - 1);
		mergeSortD(myDeque, 0, myDeque.size() - 1);
		std::cout << "\nAfter:  ";
		while (p < myDeque.size())
		{
			std::cout << myDeque[p] << " ";
			p++;
		} 
	}
	else 
		std::cerr << "Error args" << std::endl;
	// system("leaks PmergeMe");
	return (0);
}