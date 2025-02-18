#include <iostream>
using namespace std;
int main() {
    int base,exponent,product=1;
    cin>>base>>exponent;
    int number  = base ;
    for (int i = 1; i < exponent; i++) {
        number = number * base;
    }
    cout<<number;
    return 0;
}