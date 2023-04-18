/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:37 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/18 13:18:28 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	validOp(std::stack<int> &myStack, char c, int first, int second)
{
	int	tmp = 0;

	if (c == '-')
		tmp = first - second;
	else if (c == '+')
		tmp = first + second;
	else if (c == '*')
		tmp = first * second;
	else if (c == '/' && second != 0)
		tmp = first / second;
	else if (c == '/' && second == 0)
	{
		std::cerr << "Error" << std::endl;
		exit (1);
	}
	myStack.push(tmp);
}

void	parsing(std::stack<int> &myStack ,std::string str)
{
	int i = 0;
	int op = 0;
	int dig = 0;
	while (str[i])
	{
		if (isdigit(str[i]))
			dig++;
		else if (str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/')
			op++;
		else if (str[i] != '-' && str[i] != '+' && str[i] != '*' && str[i] != '/' && !isdigit(str[i]) && !isspace(str[i]))
		{
			std::cerr << "Error" << std::endl;
			exit (1);
		}
		i++;
	}
	if (!(dig == op + 1))
	{
		std::cerr << "Error" << std::endl;
		exit (1);
	}
	while (i > -1)
	{
		if (isdigit(str[i]))
			myStack.push(str[i] - 48);
		i--;
	}
}

void	data_init(std::stack<int> &myStack, std::string str)
{
	char	c;
	int		nb1;
	int		nb2;
	int		i = 0;

	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/') && myStack.size() >= 2)
		{
			c = str[i];
			nb1 = myStack.top();
			myStack.pop();
			nb2 = myStack.top();
			myStack.pop();
			validOp(myStack ,c, nb1, nb2);
		}
		i++;
	}
}
