/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:47 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/16 00:34:38 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	int			nb = 0;
	std::string	str;
	std::stack<int> myStack;

	if (ac == 2)
	{
		str = av[1];
		parsing(myStack ,str);
		data_init(myStack ,str);
		if (myStack.size() == 1)
		{
			nb = myStack.top();
			std::cout << nb << std::endl;
		}
	}
	else
		std::cerr << "Error" << std::endl;
	return (0);
}
