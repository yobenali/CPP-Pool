/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/08 20:49:29 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::ifstream file(av[1]);
		if (!file.is_open())
		{
			std::cerr << "Error file failed to open" << std::endl;
			return (1);
		}
		BitcoinExchange data("data.csv");
		std::string 	str;
		while (std::getline(file, str))
		{
			std::string dateStr;
			std::stringstream ss(str);
			float value;
			if (std::getline(ss, dateStr, '|'))
			{
				try
				{
					float exchange = data.getBitcoinExchange(dataStr, value);
					float r = value * exchange;
					std::cout << dateStr << " => " << value << " = " << r << std::endl;
				}
				catch (const std::exception &e)
				{
					std::cerr << e.what() << std::endl;
				}
			}
			else
				std::cerr << "Error invalide data => " << str << std::endl;
		}
		else
			std::cerr << "Error args" << std::endl;
	}
	return (0);
}
