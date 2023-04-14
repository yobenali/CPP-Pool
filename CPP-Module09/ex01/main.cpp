/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:47 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/14 18:33:01 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	int len;
	int	i = 0;
	int op = 0;
	double nb;
	std::string str;
	std::stack<double> myStack;
	
	if (ac == 2)
	{
		str = av[1];
		len = str.length();
		i = len;
		len--;
		while (str[len])
		{
			len = parsing(myStack, str, len, i, op);
			if (len == -1)
				break;
			if ((str[len] != '+' && str[len] != '-' && str[len] != '*' && str[len] != '/' && \
				!isdigit(str[len]) && !isspace(str[len])))
			{
				std::cerr << "Error" << std::endl; 
				return (1);
			}
		}
		if (i == op + 1)
		{
			std::cerr << "Error" << std::endl;
			return (1);
		}
		i = 0;
		while (myStack.size() != 1)
		{
			i = stackCheck(myStack, str, i);
		}
		nb = myStack.top();
		std::cout << nb << std::endl;
	}
	else
		std::cerr << "Error" << std::endl;
	return (0);
}
