/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:02 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/16 11:31:39 by yobenali         ###   ########.fr       */
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

void	inserionSort(std::vector<int> &myVector)
{
	unsigned long	i = 0;
	int	j;
	int tmp;

	while (i < myVector.size())
	{
		j = i;
		while (j > 0 && myVector[j - 1] > myVector[j])
		{
			tmp = myVector[j - 1];
			myVector[j - 1] = myVector[j];
			myVector[j] = tmp;
			j--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;
	unsigned long p = 0;
	std::vector<int> myVector;
	if (ac > 1)
	{
		parsing(ac, av);
		while (i < ac)
		{
			myVector.push_back(atoi(av[i]));
			i++;
		}
		inserionSort(myVector);
		while (p < myVector.size())
		{
			std::cout << myVector[p] << std::endl;
			p++;
		} 
	}
	else 
		std::cerr << "Error args" << std::endl;
	return (0);
}