/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:57:37 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/14 17:34:10 by yobenali         ###   ########.fr       */
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

// int	stackCheck(std::stack<double> &myStack, int i, char **av)
// {
// 	char 	c;
// 	double	nb1 = 0;
// 	double	nb2 = 0;
	
// 	c = av[1][i];
// 	nb1 = myStack.top();
// 	myStack.pop();
// 	nb2 = myStack.top();
// 	myStack.pop();
// 	nb1 = validOp(c, nb2, nb1);
// 	myStack.push(nb1);
// 	i++;
// 	return (i);
// }
