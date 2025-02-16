#include <iostream>
#include "gcd.h"
#include "rational.h"

using namespace std;
int main() {
    cout << gcd(8,12) << endl;
    Rational x = Rational(8,12);
    x.print();
    x.floatPrint();
    Rational y = Rational::add(x, Rational(1,1));
    Rational z = Rational::subtract(x, Rational(1,1));
    Rational a = Rational::divide(x, Rational(1,2));
    a.print();
    z.print();
    y.print();
}