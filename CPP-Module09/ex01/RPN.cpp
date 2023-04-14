/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:37 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/14 18:32:50 by yobenali         ###   ########.fr       */
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

int parsing(std::stack<double> &myStack, std::string str, int len, int i, int op)
{
	if (isspace(str[len]))
		len--;
	if (isdigit(str[len]) && isdigit(str[len - 1]) && len >= 0)
	{
		std::cerr << "Error" << std::endl;
		exit (1);
	}
	if (isdigit(str[len]))
	{
		myStack.push(str[len] - 48);
			len--;
		if (myStack.top() == 0 && str[len + 3] == '/' && len < i)
		{
			std::cerr << "Error" << std::endl;
			exit (1);
		}
		if (isspace(str[len]))
		len--;
	}
	if ((str[len] == '+' || str[len] == '-' || str[len] == '*' || str[len] == '/') && len >= 0)
	{
		op++;
		len--;
	}
	return (len);
}
