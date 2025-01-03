#pragma once
#include <vector>

class QuickSort
{
public:
	std::vector<int> Quicksort(std::vector<int>& v, int low, int high);
	int partition(std::vector<int>& unsorted, int low, int high);
};

class Bubble
{
public:
	std::vector<int> bubble(std::vector<int>& v);
};

