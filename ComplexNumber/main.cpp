#include <iostream>

using namespace std;

class Complex {
    public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(int realPart, int imagPart) {
        this->real = realPart;
        this->imag = imagPart;

    }

    Complex add(Complex x , Complex y) {
         int real = x.real + y.real;
         int imag = x.imag + y.imag;
         return Complex(real, imag);
    }

    Complex substract(Complex x , Complex y) {
        int real = x.real - y.real;
        int imag = x.imag - y.imag;
        return Complex(real, imag);
    }

    void printComlex() {
        cout << "(" << real << ", " << imag << ")" << endl;
    }

    int real;
    int imag;

};
int main() {
    Complex c1 = Complex(1, 1);

    c1.printComlex();

    Complex c2 = c1.add(c1, Complex(1, 1));

    c2.printComlex();
}