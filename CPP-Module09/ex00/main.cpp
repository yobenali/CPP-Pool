/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/12 22:26:56 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
		std::getline(file, str);
		while (std::getline(file, str))
		{
			std::string dateStr;
			std::stringstream ss(str);
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
