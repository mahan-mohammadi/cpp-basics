

#include <iostream>
#define BASE 200
using namespace std;

int main()
{
    int salaries[3] = { 0 };
    int brackets[9] = { 0 };
    for (int i = 0; i < sizeof(salaries) / sizeof(int); i++) {
        int sales;
        cout << "enter the sale of person " << i << ": ";
        cin >> sales;
        salaries[i] = sales * 0.09 + BASE;
    }
    for (int i = 0; i < sizeof(salaries) / sizeof(int); i++) {
        cout << salaries[i] << endl;
    }
    for (int i = 0; i < sizeof(salaries) / sizeof(int); i++)
    {
        if ((salaries[i] - BASE) / 100 >= 9) {
            brackets[8]++;
        } 
        else
        {
            brackets[(salaries[i] - BASE) / 100]++;
        }
    }
    for (int i = 0; i < sizeof(brackets) / sizeof(int); i++) {
        cout << brackets[i] << endl;
    }
    
}