/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:39 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/08 21:14:41 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "Default Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string &file)
{
	std::ifstream buff(file);
	if (!buff.is_open())
		std::cerr << "Error: could not open file." << std::endl;
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
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Default Destructor called" << std::endl;
}
