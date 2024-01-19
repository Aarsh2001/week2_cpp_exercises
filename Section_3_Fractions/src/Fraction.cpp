#include "Fraction.h"
using namespace std;

Fraction::Fraction(int a, int b){
   num = a;
   denom = b;
}
Fraction Fraction::reciprocal(){
    return Fraction(denom, num);
}
Fraction Fraction::multiply(int a){
    return Fraction(num*a, denom);
}
double Fraction::toDouble(){
    return (double)num/denom;
}
string Fraction::toString(){
    if (num == 0)
        {
            return "0";
        }
        else
        {
            return to_string(num) + "/" + to_string(denom);
        }
}