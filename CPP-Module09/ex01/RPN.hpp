/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:34:13 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/14 17:37:32 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP


# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <stack>

double	validOp(char c, double first, double second);
int 	stackCheck(std::stack<double> &myStack, char *str, int len);

#endif