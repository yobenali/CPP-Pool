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

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

class BitcoinExchange
{
	private:
	        std::map<std::string, float>;
	        bool validOrNot(const std::string &date) const;
	public:
	        BitcoinExchange(void);
	        BitcoinExchange(const std::string &file);
	        BitcoinExchange(const BitcoinExchange &obj);
	        virtual ~BitcoinExchange(void);

	        BitcoinExchange &operator=(const BitcoinExchange &obj)
	        float getBitcoinExchange(const std::string &date, float value) const;
	protected:



};
std::ostream &operator<<(std::ostream &out, const BitcoinExchange &i);

