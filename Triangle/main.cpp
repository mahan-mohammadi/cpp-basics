#include <iostream>
using namespace std;
int main() {
    int row,number=1;
    cin >> row;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++,number++) {
            cout << number << " ";
        }
        cout << endl;
    }
}