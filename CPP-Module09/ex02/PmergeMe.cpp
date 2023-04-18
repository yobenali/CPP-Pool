/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobenali <yobenali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:58:08 by yobenali          #+#    #+#             */
/*   Updated: 2023/04/18 14:24:29 by yobenali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	inserionSortV(std::vector<int> &myVector, int start, int end)
{
	int	i = start;
	int	j;
	int tmp;

	while (start <= end)
	{
		j = start;
		while (j > i && myVector[j - 1] > myVector[j])
		{
			tmp = myVector[j - 1];
			myVector[j - 1] = myVector[j];
			myVector[j] = tmp;
			j--;
		}
		start++;
	}
}

void	inserionSortD(std::deque<int> &myDeque, int start, int end)
{
	int	i = start;
	int	j;
	int tmp;

	while (start <= end)
	{
		j = start;
		while (j > i && myDeque[j - 1] > myDeque[j])
		{
			tmp = myDeque[j - 1];
			myDeque[j - 1] = myDeque[j];
			myDeque[j] = tmp;
			j--;
		}
		start++;
	}
}


void	mergeSortV(std::vector<int> &myVector,  int start, int end)
{
	int mid = start + (end - start) / 2;
	int i, j, k;
	if (end - start <= 2)
	{
		inserionSortV(myVector, start, end);
		return;
	}
	mergeSortV(myVector, start, mid);
	mergeSortV(myVector, mid + 1, end);
	i = start, j = mid + 1, k = 0;
	std::vector<int> tmp(end - start + 1);
	while (i <= mid && j <= end)
	{
		if (myVector[i] <= myVector[j])
		{
			tmp[k++] = myVector[i++];
		}
		else
			tmp[k++] = myVector[j++];
	}
	while (i <= mid)
		tmp[k++] = myVector[i++];
	while (j <= end)
		tmp[k++] = myVector[j++];
	i = start;
	k = 0;
	while (i <= end)
	{
		myVector[i] = tmp[k];
		i++;
		k++;
	}
}

void	mergeSortD(std::deque<int> &myDeque,  int start, int end)
{
	int mid = start + (end - start) / 2;
	int i, j, k;
	if (end - start <= 2)
	{
		inserionSortD(myDeque, start, end);
		return;
	}
	mergeSortD(myDeque, start, mid);
	mergeSortD(myDeque, mid + 1, end);
	i = start, j = mid + 1, k = 0;
	std::deque<int> tmp(end - start + 1);
	while (i <= mid && j <= end)
	{
		if (myDeque[i] <= myDeque[j])
		{
			tmp[k++] = myDeque[i++];
		}
		else
			tmp[k++] = myDeque[j++];
	}
	while (i <= mid)
		tmp[k++] = myDeque[i++];
	while (j <= end)
		tmp[k++] = myDeque[j++];
	i = start;
	k = 0;
	while (i <= end)
	{
		myDeque[i] = tmp[k];
		i++;
		k++;
	}
}