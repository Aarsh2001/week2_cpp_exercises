#include "vector_functions.h"
#include <algorithm>
#include <iostream>
using namespace std;

// write your print vector function here
int countMultiplesOfFive(vector<int> v)
{
    
    int c = count_if(v.begin(), v.end(), [](int y){return y%5==0;});
    return c;
}


void addElements(std::vector<int>&v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}