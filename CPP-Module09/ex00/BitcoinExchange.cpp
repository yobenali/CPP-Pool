/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:39 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/09 23:48:39 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "Default Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	if (this != &obj)
		*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Default Destructor called" << std::endl;
}
