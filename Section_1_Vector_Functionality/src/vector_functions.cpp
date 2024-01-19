#include "vector_functions.h"
#include <algorithm>
#include <iostream>
using namespace std;

// write your print vector function here

int countMultiplesOfFive(vector<int> v)
{
    int c = 0;
    for(auto it: v)
    {
        if (it%5==0)
        {
            c++;
        }

    }
    return c;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}