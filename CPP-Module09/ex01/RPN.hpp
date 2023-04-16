/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:34:13 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/16 01:35:35 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <stack>

void	parsing(std::stack<int> &myStack ,std::string str);
void	data_init(std::stack<int> &myStack, std::string str);
void	validOp(std::stack<int> &myStack, char c, int first, int second);

#endif