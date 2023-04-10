/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/10 02:09:06 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool validOrNot(const std::string &date, float value)
{
	int  year, month, day;
	std::istringstream ss(date);
	std::string sep;
	std::string ws;
	ss >> year >> sep >> month >> sep >> day;
	std::cout << "year : " << year << "month : " << month << "day : " << day << std::endl;
	if (value < 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cerr << "Error: too large a number." << std::endl;
	return (true);
}

void	checkDataFile(const std::string &file, std::map<std::string, float> dataMAp)
{
	std::ifstream buff(file);
	if (!buff.is_open())
		std::cerr << "Error: could not open file." << std::endl;
	std::string str;
	while (std::getline(buff, str))
	{
		std::string dateStr;
		std::stringstream ss(str);
		float value;
		std::getline(ss, dateStr, ',');
		ss >> value;
		dataMAp[dateStr] = value;
		// std::cout << "value :" << value << " ____________ " << "date :" << dateStr << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::map<std::string, float> dataMap;
	if (ac == 2)
	{
		std::ifstream file(av[1]);
		if (!file.is_open())
		{
			std::cerr << "Error file failed to open" << std::endl;
			return (1);
		}
		checkDataFile("data.csv", dataMap);
		std::string 	str;
		while (std::getline(file, str))
		{
			std::string dateStr;
			std::stringstream ss(str);
			float value;
			if (std::getline(ss, dateStr, '|') && ss >> value)
			{
				std::cout << dateStr << std::endl;
				if (validOrNot(dateStr, value))
				{
					// float exchange = data.getBitcoinExchange(dateStr, value);
		 			// float r = value * exchange;
					// std::cout << dateStr << " => " << value << " = " << r << std::endl;
					// std::cout << "IN SHIT HERE WE GOO AGAIN" << std::endl; 
				}
			}
			else
				std::cerr << "Error invalide data => " << str << std::endl;
		}
	}
	else
		std::cerr << "Error args" << std::endl;
	return (0);
}
