/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:58 by yobenali          #+#    #+#             */
/*   Updated: 2023/03/21 23:55:59 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::ifstream fileData(av[1]);
		if (!fileData.is_open())
		{
			std::cerr << "Error file failed to open" << std::endl;
			return (1);
		}
		BitcoinExchange data("data.csv");
		std::string 	str;
		while (std::getline(fileData, str))
		{
			std::string oStr;
			std::stringstream oValue(str);
			float value;
			if (std::getline(oValue, oStr, '|'))
			{
				
			}
		}
	}
}
