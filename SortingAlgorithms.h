#pragma once
#include <vector>

class SortingAlgorithms
{
public:
	std::vector<int> Quicksort(std::vector<int>& v, int low, int high);
	int partition(std::vector<int>& unsorted, int low, int high);
};

