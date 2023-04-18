/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/18 15:03:51 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	checkStr(std::string str)
{
	std::string dateStr;
	std::string value;
	std::stringstream ss(str);
	std::getline(ss, dateStr, '|');
	int i, flag;
	ss >> value;
	i = 0;
	flag = 0;
	while (value[i])
	{
		if (value[i] == '.')
			flag++;
		else if (value[i] == ',')
			flag+= 2;
		i++;
	}
	if (flag > 1)
	{
		std::cerr << "Error: bad input => " << str << std::endl;
		return (1);
	}
	return (0);
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
			if (!isdigit(str[0]) || checkStr(str))
				continue;
			float value;
			if (std::getline(ss, dateStr, '|') && ss >> value)
			{
				if (validOrNot(dateStr, value))
				{
					float vExchange = exchange(dateStr, dataMap);
		 			float calc = value * vExchange;
					std::cout << dateStr << " => " << value << " = " << calc << std::endl;
				}
			}
			else
				std::cerr << "Error: bad input => " << str << std::endl;
		}
	}
	else
		std::cerr << "Error args" << std::endl;
	return (0);
}
