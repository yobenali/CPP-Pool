#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

class BitcoinExchange
{
	private:
	        std::map<std::string, float> dataMAp;
	        bool validOrNot(const std::string &date) const;
	public:
	        BitcoinExchange(void);
	        BitcoinExchange(const std::string &file);
	        BitcoinExchange(const BitcoinExchange &obj);
	        virtual ~BitcoinExchange(void);

	        BitcoinExchange &operator=(const BitcoinExchange &obj);
	        float getBitcoinExchange(const std::string &date, float value) const;
};
std::ostream &operator<<(std::ostream &out, const BitcoinExchange &i);
