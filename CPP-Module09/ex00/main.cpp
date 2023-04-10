/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/10 00:27:16 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool validOrNot(const std::string &date) const
{
	int year, month, day;
	std::string
	
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
		std::getline(ss, dateStr, ',') && ss >> value;
		dataMAp[dateStr] = value;
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
		// std::string 	str;
		// while (std::getline(file, str))
		// {
		// 	std::string dateStr;
		// 	std::stringstream ss(str);
		// 	float value;
		// 	if (std::getline(ss, dateStr, '|') && ss >> value)
		// 	{
		// 		float exchange = data.getBitcoinExchange(dateStr, value);
		// 		float r = value * exchange;
		// 		std::cout << dateStr << " => " << value << " = " << r << std::endl;
		// 	}
		// 	else
		// 		std::cerr << "Error invalide data => " << str << std::endl;
		// }
	}
	else
		std::cerr << "Error args" << std::endl;
	return (0);
}
