#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <vector>
# include <deque>

void	mergeSortV(std::vector<int> &myVector,  int start, int end);
void	mergeSortD(std::deque<int> &myDeque,  int start, int end);
void	inserionSortV(std::vector<int> &myVector, int start, int end);
void	inserionSortD(std::deque<int> &myDeque, int start, int end);

#endif