

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    double delta;
    double answer1 , answer2;

    cout << "Your equation is -------->  0 = a (x^2) + b x + c   Find X1 & X2." << endl;
    cout << "\nPlease enter A, B, C." << endl;

    cout << "\nEnter A = ";
    cin >> a;

    cout << "Enter B = ";
    cin >> b;

    cout << "Enter C = ";
    cin >> c;

    cout << "\nYour equation is ====>   0 = " << a << "(x^2) + " << b << "(x) + " << c << endl;

    delta = b * b - 4 * a * c;
    if (delta > 0) {
        cout << "\nIt has two answers" << endl;
        answer1 = (-b + sqrt(delta)) / (2 * a);
        answer2 = (-b - sqrt(delta)) / (2 * a);
        cout << "\nAnswers: " << answer1 << " and " << answer2 << endl;
    }
    else if (delta == 0) {
        cout << "\nIt has one answer" << endl;
        answer1 = (-b + sqrt(delta)) / (2 * a);
        cout << "\nAnswer: " << answer1 << endl;
    }
    else {
        cout << "There is no answer to the equation\n";
    }

}
