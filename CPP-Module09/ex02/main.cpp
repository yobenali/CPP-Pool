/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:02 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/16 01:43:56 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	parsing(int ac, char **av)
{
	int	i = 1;
	int	j;
	while (i < ac)
	{
		j = i + 1;
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
	
	if (ac > 1)
	{
		parsing(ac, av);
	}
	else 
		std::cerr << "Error args" << std::endl;
	return (0);
}