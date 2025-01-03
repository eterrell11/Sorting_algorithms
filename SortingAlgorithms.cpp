#include "SortingAlgorithms.h"
#include <vector> 


std::vector<int> QuickSort::Quicksort(std::vector<int>& v, int low, int high)
{
    if (low < high)
    {
       int pi = partition(v, low, high);
       v =  Quicksort(v, low, pi - 1);
       v = Quicksort(v, pi + 1, high);
    }
    return v;
}


int QuickSort::partition(std::vector<int>& unsorted, int low, int high)
{
    int pivot = unsorted[high];
    int i = (low-1);
    for (int j = low; j <= high-1; j++)
    {
        if (unsorted[j] <= pivot)
        {
            i++;
            std::swap(unsorted[i], unsorted[j]);
        }
    }
    std::swap(unsorted[i + 1], unsorted[high]);
    return (i+1);
}

std::vector<int> Bubble::bubble(std::vector<int>& v)
{
    int maxit = v.size();
    int it = maxit;
    for (int j = 0; j < maxit; j++)
    {
        for (int i = 0; i < it-1; i++)
        {
            if (v[i] > v[i + 1])
                std::swap(v[i], v[i + 1]);
        }
        it--;
    }
    return v;
}
