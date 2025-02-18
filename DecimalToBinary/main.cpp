#include <iostream>
using namespace std;
int main() {
    int number,i=1;
    int result=0;
    cin >> number;
    while (number) {
        result = result+ number%2 * i;
        number/=2;
        i*=10;
    }
    cout << result;
    return 0;
}
