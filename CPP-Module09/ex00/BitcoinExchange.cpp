/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:39 by yobenali          #+#    #+#             */
/*   Updated: 2023/03/21 23:55:41 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoineExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "Default Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string &file)
{
	std::ifstream buff(file);
	if (!file.is_open())
		throw fileError();
	std::string str;
	while (std::getline(buff, str))
	{
		std::string dataStr;
		std::stringstream ss(str);
		float value;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	if (*this != obj)
		*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (*this != obj)
		*this = obj;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Default Destructor called" << std::endl;
}
