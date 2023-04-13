/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:47 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/13 02:09:49 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double	validOp(char c, double first, double second)
{
	double tmp;

	if (c == '-')
		tmp = first - second;
	else if (c == '+')
		tmp = first + second;
	else if (c == '*')
		tmp = first * second;
	else
		tmp = first / second;
	return (tmp);
}


int main(int ac, char **av)
{
	char	c;
	int		i = 0;
	double	nb1 = 0;
	double	nb2 = 0;
	
	if (ac == 2)
	{
		std::stack<double> myStack;
		while (myStack.size() != 2 && av[1][i])
		{
			if (isspace(av[1][i]))
				i++;
			if (isdigit(av[1][i]) && isdigit(av[1][i + 1]) && av[1][i + 1])
			{
				std::cerr << "Error" << std::endl;
				return (1);
			}
			if (isdigit(av[1][i]))
			{
				myStack.push(av[1][i] - 48);
				i++;
				if (isspace(av[1][i]))
					i++;
			}
			if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
			{
				c = av[1][i];
				nb1 = myStack.top();
				myStack.pop();
				nb2 = myStack.top();
				myStack.pop();
				nb1 = validOp(c, nb2, nb1);
				myStack.push(nb1);
				i++;
			}
			if ((av[1][i] != '+' && av[1][i] != '-' && av[1][i] != '*' && av[1][i] != '/' && \
				!isdigit(av[1][i]) && !isspace(av[1][i]) ) && av[1][i])
			{
				std::cerr << "Error" << std::endl; 
				return (1);
			}
		}
		if (myStack.size() == 2)
		{
			std::cerr << "Error" << std::endl;
			return (1);
		}
		nb1 = myStack.top();
		std::cout << nb1 << std::endl;
	}
	else
		std::cerr << "Error" << std::endl;
	return (0);
}
