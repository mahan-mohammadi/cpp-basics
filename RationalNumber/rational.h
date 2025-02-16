//
// Created by ThinkPad P50 on 2/16/2025.
//

#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include <ostream>
#include "gcd.h"

using namespace std;
class Rational {
    public:
    Rational() {
        this -> numerator = 0;
        this -> denominator = 1;
    }
    Rational(int numerator, int denominator) {
        if (denominator == 0) {
            denominator = 1;
            cout << "denominator is zero so now it's set to 1" << endl;

        }
        int d = gcd(numerator, denominator);
        this -> numerator = numerator / d;
        this -> denominator = denominator / d;
    }
    //should be refactored
    static Rational add(Rational x , Rational y) {
        // calculating lcm based on gcd
        int denominator = x.denominator * y.denominator / gcd(x.denominator, y.denominator);
        int d1 = denominator / x.denominator;
        int d2 = denominator / y.denominator;
        int numerator1 = x.numerator * d1;
        int numerator2 = y.numerator * d2;
        int newnumerator = numerator1 + numerator2;
        int d = gcd(newnumerator, denominator);
        return Rational(newnumerator/d, denominator/d);
    }

    static Rational subtract(Rational x, Rational y) {
        int denominator = x.denominator * y.denominator / gcd(x.denominator, y.denominator);
        int d1 = denominator / x.denominator;
        int d2 = denominator / y.denominator;
        int numerator1 = x.numerator * d1;
        int numerator2 = y.numerator * d2;
        int newnumerator = numerator1 - numerator2;
        int d = gcd(newnumerator, denominator);
        return Rational(newnumerator/d, denominator/d);
    }
    static Rational mult(Rational y , Rational x) {
        int newDenominator = x.denominator * y.denominator;
        int newNumerator = x.numerator * y.numerator;
        int d = gcd(newNumerator, newDenominator);
        return Rational(newNumerator/d, newDenominator/d);
    }
    static Rational divide(Rational x , Rational y) {
        int newDenominator = x.denominator * y.numerator;
        int newNumerator = x.numerator * y.denominator;
        int d = gcd(newNumerator, newDenominator);
        return Rational(newNumerator/d, newDenominator/d);
    }
    void print() {
        cout << numerator << "/" << denominator << endl;
    }
    void floatPrint() {
        cout << (double)numerator/(double) denominator << endl;
    }

    private:
    int denominator;
    int numerator;
};
#endif //RATIONAL_H
