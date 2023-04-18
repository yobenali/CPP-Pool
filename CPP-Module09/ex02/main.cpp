/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:02 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/18 12:39:55 by yobenali         ###   ########.fr       */
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
		// while (j < ac)
		// {
		// 	if (!strcmp(av[i], av[j]))
		// 	{
		// 		std::cerr << "Error duplication found" << std::endl;
		// 		exit(1);
		// 	}
		// 	j++;
		// }
		i++;
	}
}

int	main(int ac, char **av)
{
	int					i = 1;
	unsigned long		p = 0;
	std::deque<int>		myDeque;
	std::vector<int>	myVector;
	clock_t vStart, dStart, vEnd, dEnd;
	
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
		vStart = clock();
		mergeSortV(myVector, 0, myVector.size() - 1);
		vEnd = clock();
		dStart = clock();
		mergeSortD(myDeque, 0, myDeque.size() - 1);
		dEnd = clock();
		std::cout << "\nAfter:  ";
		while (p < myDeque.size())
		{
			std::cout << myDeque[p] << " ";
			p++;
		}
		double duration = ((double)(vEnd - vStart) / CLOCKS_PER_SEC) * 1000;
		std::cout << "\nTime to process a range of " << myVector.size() << " elements with std::vector : " << duration << " us" << std::endl;
		double dDuration = ((double)(dEnd - dStart) / CLOCKS_PER_SEC) * 1000;
		std::cout << "Time to process a range of " << myVector.size() << " elements with std::deque  : " << dDuration <<  " us" << std::endl;
	}
	else 
		std::cerr << "Error args" << std::endl;
	return (0);
}