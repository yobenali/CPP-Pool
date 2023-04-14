/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:47 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/14 18:01:12 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	stackCheck(std::stack<double> &myStack, std::string str, int i)
{
	char 	c;
	double	nb1 = 0;
	double	nb2 = 0;
	
	if (i != 0)
		i++;
	while (str[i] && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')
		i++;
	c = str[i];
	nb1 = myStack.top();
	myStack.pop();
	nb2 = myStack.top();
	myStack.pop();
	nb1 = validOp(c, nb1, nb2);
	myStack.push(nb1);
	return (i);
}

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
			if (isspace(str[len]))
				len--;
			if (isdigit(str[len]) && isdigit(str[len - 1]) && len >= 0)
			{
				std::cerr << "Error" << std::endl;
				return (1);
			}
			if (isdigit(str[len]))
			{
				myStack.push(str[len] - 48);
					len--;
				if (myStack.top() == 0 && str[len + 3] == '/' && len < i)
				{
					std::cerr << "Error" << std::endl;
					return (1);
				}
				if (isspace(str[len]))
				len--;
			}
			if ((str[len] == '+' || str[len] == '-' || str[len] == '*' || str[len] == '/') && len >= 0)
			{
				op++;
				len--;
			}
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
