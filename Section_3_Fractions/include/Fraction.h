#pragma once
#include <string>
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