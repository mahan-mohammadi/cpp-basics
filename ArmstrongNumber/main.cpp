#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int num,sum=0,i=0;
    cout << "Please enter a number: ";
    cin >> num;
    int savedNum1=num;


    while (savedNum1) {
        sum += savedNum1%10 * (savedNum1%10) * (savedNum1%10) ;
        savedNum1/=10;
    }
    if (sum == num) {
        cout << num << " is a armstrong number" << endl;
    }
    else {
        cout << num << " is not a armstrong number" << endl;
    }

    return 0;
}