// Sorting_algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>
#include "SortingAlgorithms.h"

using namespace std;


int main()
{
    
    int n; //length of random vector;
    cout << "How long of a vector do you want to sort?" << endl;
    cin >> n;
    cout << "You chose n = " << n << endl;
    int alg; //Which sorting algorithm to use;
    int low = 0;
    int high = n - 1;


    srand(unsigned(time(nullptr)));
    std::vector<int> v(n);
    generate(v.begin(), v.end(), rand);

    cout << "Using the following algorithm: " << endl;
    cout << "Enter 1 for QuickSort, 2 for Bubble, 3 for Selection :" << endl << endl;
    cin >> alg;

    switch (alg)
    {
        case 1:
        {
            cout << "QuickSort sort selected" << endl;
            QuickSort sort;
            v = sort.Quicksort(v, low, high);
            break; }
        case 2:
        {
            cout << "Bubble sort selected" << endl;
            Bubble sort;
            v = sort.bubble(v);
            break; }
        case 3:
        {
            cout << "Selection sort selected" << endl;
            Sweeps sort;
            v = sort.sweeps(v);
            break; }
        default:
        {
            cout << " That number isn't an option, you silly goose" << endl;
        }
    }


    cout << endl;
    cout << "The sorted vector : " << endl;
    for (int i = 1; i < n; i++)
        if (v[i] <= v[i - 1])
        {
            cout << "ERROR: sorting failed" << endl;
            break;
        }
    cout << "Great success!" << endl;
}
