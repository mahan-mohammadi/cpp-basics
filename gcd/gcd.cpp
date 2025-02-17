#include <iostream>
using namespace std;
int main() {
    int num1 ,num2, reminder =0;
    cin >> num1 >> num2;

    bool isprime = false;
    if (num2 > num1) {
        int temp;
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    while (!isprime) {
        reminder = num1 % num2;
        if (reminder  == 0) {
            isprime = true;
        }
        num1 = num2;
        num2 = reminder;
    }
    cout << num1 << endl;
    return 0;
}