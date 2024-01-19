#pragma once
#include <string>
#include <algorithm>
using namespace std;

class Fraction{
    public:
        Fraction(int, int );
        Fraction reciprocal();
        Fraction multiply(int);
        double toDouble();
        string toString();

    private:
    int num; int denom;      
};