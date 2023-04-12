/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:39 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/12 22:27:05 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool validOrNot(const std::string &date, float value)
{
	int  year, month, day;
	char sep;
	std::stringstream ss(date);
	ss >> year >> sep >> month >> sep >> day;
	if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
	{
		std::cerr << "Error: invalid date => " << date << std::endl;
		return(false);
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	{
		std::cerr << "Error: invalid date => " << date << std::endl;
		return(false);	
	}
	if (month == 2 && day > 29)
	{
		std::cerr << "Error: invalid date => " << date << std::endl;
		return(false);
	}
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return(false);
	}
	else if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return(false);
	}
	return (true);
}

void	checkDataFile(const std::string &file, std::map<std::string, float> &dataMAp)
{
	std::ifstream buff(file);
	if (!buff.is_open())
		std::cerr << "Error: could not open file." << std::endl;
	std::string str;
	std::getline(buff, str);
	while (std::getline(buff, str))
	{
		std::string dateStr;
		std::stringstream ss(str);
		float value;
		std::getline(ss, dateStr, ',');
		ss >> value;
		dataMAp[dateStr] = value;
	}
}

float	exchange(std::string date, std::map<std::string, float> &dataMAp)
{
	std::map<std::string, float>::iterator it = dataMAp.find(date);
	if (it == dataMAp.end())
	{
		it = dataMAp.upper_bound(date);
		if (it != dataMAp.begin())
			it--;
	}
	return (it->second);
}