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
    cout << "I would like to sort the following vector of integers: " << endl;

    cout << "Using the following algorithm: " << endl;
    cout << "Enter 1 for QuickSort, 2 for Bubble :" << endl << endl;
    cin >> alg;
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;
    cout << endl;

    switch (alg)
    {
        case 1:
        {
            cout << "QuickSort selected" << endl;
            QuickSort sort;
            v = sort.Quicksort(v, low, high); }
        case 2:
        {
            cout << "Bubble selected" << endl;
            Bubble sort;
            v = sort.bubble(v);
        }
        default:
        {
            cout << " That number isn't an option, you silly goose" << endl;
        }
    }


    cout << endl;
    cout << "The sorted vector : " << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;
}
