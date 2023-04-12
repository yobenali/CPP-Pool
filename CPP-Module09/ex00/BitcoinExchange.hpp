#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

bool	validOrNot(const std::string &date, float value);
float	exchange(std::string date, std::map<std::string, float> &dataMAp);
void	checkDataFile(const std::string &file, std::map<std::string, float> &dataMAp);

#endif